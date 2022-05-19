// ====================================
// = Declare Functions and Procedures =
// ====================================

// ======================
// = Drawing Procedures =
// ======================

// Draw the shapes in the menu
void draw_shapes_menu(shape_type selected_shape) {
  // Draw the "toolbar" area
  fill_rectangle(color_light_gray(), 0, 0, 60, 600);

  // Draw the menu shapes.
  fill_circle(color_green(), MENU_CIRCLE);
  fill_triangle(color_green(), MENU_TRIANGLE);
  fill_rectangle(color_green(), MENU_RECT);
  fill_ellipse(color_green(), MENU_ELLIPSE);

  // Redraw the selected shape
  switch (selected_shape) {
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
void draw_shape(shape &s) {
  switch (s.type) {
    case RECTANGLE:
      fill_rectangle(s.fill_color, s.data.rect);
      break;
    case CIRCLE:
      fill_circle(s.fill_color, s.data.circ);
      break;
    case TRIANGLE:
      fill_triangle(s.fill_color, s.data.tri);
      break;
    case ELLIPSE:
      fill_ellipse(s.fill_color, s.data.ellipse);
      break;
    case NONE:
      break;
  }  // end switch
}

// Draw the drawing
void do_drawing(drawing &d) {
  // Clear screen and redraw menu
  clear_screen();
  draw_shapes_menu(d.selected_shape);

  // Draw the shapes
  for (int i = 0; i < MAX_SHAPES; ++i) {
    draw_shape(d.shapes[i]);
  }  // for i
}  // do drawing
