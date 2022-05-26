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
}  // add circle

// Add a triangle to the drawing
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
}  // add triangle

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
}  // add ellipse
