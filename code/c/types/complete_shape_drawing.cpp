/*
* Program: Shape Drawer - Splashkit source file.
*/

#include <stdio.h>
#include <stdbool.h>
#include "splashkit.h"

// =====================
// = Declare Constants =
// =====================
#define MAX_SHAPES	20

// Menu Shape Constants
const rectangle MENU_RECT = {10,250,40,50};
const circle	MENU_CIRCLE = {{30,100},20};
const triangle  MENU_TRIANGLE = triangle_from(30,150,10,200,50,200);
const rectangle MENU_ELLIPSE = {10,350,40,50};
const rectangle DRAWING_PAD = {61,0,790,600};

// =================
// = Declare Types =
// =================

// The Shape Type is one of these options
typedef enum
{
	CIRCLE,
	TRIANGLE,
	RECTANGLE,
	ELLIPSE,
	//UNKNOWN
	NONE
} shape_type;

// The Shape Data is either...
typedef union
{
	rectangle   rect;
	circle	    circ;
	rectangle	ellipse;
	triangle    tri;
} shape_data;

// The shape records...
typedef struct
{
	shape_type  type;        // the option selected
	color       fill_color;  // the fill color
	shape_data  data;        // the shape's data
} shape;

// A Drawing records...
typedef struct
{
	shape       shapes[MAX_SHAPES]; // a number of shapes
	int         index;              // the index of the last shape used
	shape_type  selected_shape;	    // the selected shape type
} drawing;


// ====================================
// = Declare Functions and Procedures =
// ====================================


// ======================
// = Drawing Procedures =
// ======================

// Draw the shapes in the menu
void draw_shapes_menu(shape_type selected_shape)
{
    // Draw the "toolbar" area
	fill_rectangle(color_light_gray(),0,0,60,600);
	
	// Draw the menu shapes.
	fill_circle(color_green(), MENU_CIRCLE);
	fill_triangle(color_green(), MENU_TRIANGLE);
	fill_rectangle(color_green(), MENU_RECT);
	fill_ellipse(color_green(), MENU_ELLIPSE);
	
	// Redraw the selected shape
	switch(selected_shape)
	{
	    case RECTANGLE: 
	        draw_rectangle(color_black(), MENU_RECT);
            break;
        case TRIANGLE:
		    draw_triangle(color_black(), MENU_TRIANGLE);
            break;
        case CIRCLE:
		    draw_circle(color_black(), MENU_CIRCLE);
            break;
        case ELLIPSE:
            draw_ellipse(color_black(), MENU_ELLIPSE);
            break;
        case NONE:
            break;
        // Do nothing for default...
	}
}

// Draw a shape onto the screen
void draw_shape(shape &s)
{
    switch(s.type)
	{
		case RECTANGLE:
			fill_rectangle(s.fill_color, s.data.rect);
			break;
		case CIRCLE:
			fill_circle(s.fill_color,s.data.circ);
			break;
		case TRIANGLE:
			fill_triangle(s.fill_color,s.data.tri);
			break;
		case ELLIPSE:
			fill_ellipse(s.fill_color,s.data.ellipse);
			break;
		case NONE:
			break;
	}//end switch
}

// Draw the drawing
void do_drawing(drawing &d)
{	
    // Clear screen and redraw menu
    clear_screen();
    draw_shapes_menu(d.selected_shape);
    
	// Draw the shapes
	for(int i = 0; i< MAX_SHAPES; ++i)
	{
        draw_shape(d.shapes[i]);
	}//for i	
}//do drawing

// ============================
// = Procedures to Add Shapes =
// ============================

// Add a rectangle to the drawing
void add_rectangle(shape &s, point_2d pt)
{
    // Set the shape
	s.type = RECTANGLE;
	s.fill_color = color_red();
	
	// Copy in the menu rectangle
	s.data.rect = MENU_RECT;
	
	// Change its position
	s.data.rect.x = pt.x;
	s.data.rect.y = pt.y;
}

// Add a circle to the drawing
void add_circle(shape &s, point_2d pt)
{
    // Set the shape
	s.type = CIRCLE;
	s.fill_color = color_blue();
	
	// Copy in the menu circle radius
	s.data.circ.radius = MENU_CIRCLE.radius;
	
	// Set the position
	s.data.circ.center = pt;
}//add circle

//Add a triangle to the drawing
void add_triangle(shape &s, point_2d pt)
{
	// Set the type and color
	s.type = TRIANGLE;
	s.fill_color = color_yellow();
	
	// Set point 1 to pt
	s.data.tri.points[0] = pt;
	
	// Offset point -20 x, 50 y
	s.data.tri.points[1].x = pt.x - 20;
	s.data.tri.points[1].y = pt.y + 50;
	
	// Offset point 20 x, 50 y
	s.data.tri.points[2].x = pt.x + 20;
	s.data.tri.points[2].y = pt.y + 50;
}//add triangle

void add_ellipse(shape &s, point_2d pt)
{
    // Setup the shape
	s.type = ELLIPSE;
	s.fill_color = color_green();
	
	// Copy in menu ellipse
	s.data.ellipse = MENU_ELLIPSE;
	
	// Change shapes position
	s.data.ellipse.x = pt.x;
	s.data.ellipse.y = pt.y;	
}//add ellipse

//input processing procedures
bool process_key(drawing &d)
{
	if(key_down(Q_KEY)) return true;
	if(key_down(C_KEY))
	{
		d.index = 0;
		for(int i = 0; i < MAX_SHAPES ;++i) d.shapes[i].type = NONE;
	}
	return false;	
}

// Check if the user has clicked in a shape in the toolbar
void process_menu_click(drawing &d, point_2d pt)
{	
	if(point_in_rectangle(pt,MENU_RECT))
	{
		d.selected_shape = RECTANGLE;
	}
	if(point_in_triangle(pt,MENU_TRIANGLE))
	{
		d.selected_shape = TRIANGLE;
	}
	if(point_in_circle(pt,MENU_CIRCLE))
	{
		d.selected_shape = CIRCLE;
	}
	if(point_in_rectangle(pt,MENU_ELLIPSE))
	{
		d.selected_shape = ELLIPSE;
	}
}

// Add a shape to the canvas
void process_canvas_click(drawing &d, point_2d pt)
{
    // Try to add a shape... is the current index < maximum?
	if(d.index < MAX_SHAPES)
	{
	    // Select the shape to add...
		switch(d.selected_shape)
		{
			case RECTANGLE:
			    add_rectangle(d.shapes[d.index], pt);
                d.index++;
			    break;
			case CIRCLE:
			    add_circle(d.shapes[d.index], pt);
			    d.index++;
			    break;
			case TRIANGLE:
			    add_triangle(d.shapes[d.index], pt);
			    d.index++;
			    break;
			case ELLIPSE:
			    add_ellipse(d.shapes[d.index], pt);
			    d.index++;
			    break;
			default:
                return; // jump out if no selected shape...
		}//end switch
	}//end if
}//process pad click

//the input procedure
bool process_input(drawing &d)
{
	if(mouse_clicked(LEFT_BUTTON))
	{
		point_2d pt = mouse_position();
		
		if(pt.x < 60) 	
		    process_menu_click(d,pt);
		else			
		    process_canvas_click(d,pt);
	}//if LEFT BUTTON
	
	if(any_key_pressed())  
	    return true;
	else
		return false;
}//process input

void setup_drawing(drawing &d)
{
    // Start adding at index 0
    d.index = 0;
    
    // All shapes are unknown...
	for(int i = 0; i < MAX_SHAPES ;++i) 
	{
	    d.shapes[i].type = NONE;
    }
}

//main	
int main()
{
    // Create the drawing...
    drawing my_drawing;
    bool quit = false;
	
	// Initialise the drawing with empty data...
    setup_drawing(my_drawing);
			
    open_window("Draw Shapes", 800, 500);
    
    do
    {
		process_events(); // read user interactions...
		quit = process_input(my_drawing);
		
		do_drawing(my_drawing);
        refresh_screen();
    } while ( ! quit_requested() && !quit);

    return 0;
}




