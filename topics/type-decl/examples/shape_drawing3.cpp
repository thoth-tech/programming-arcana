// input processing procedures
bool process_key(drawing &d) {
  if (key_down(Q_KEY)) return true;
  if (key_down(C_KEY)) {
    d.index = 0;
    for (int i = 0; i < MAX_SHAPES; ++i) d.shapes[i].type = NONE;
  }
  return false;
}

// Check if the user has clicked in a shape in the toolbar
void process_menu_click(drawing &d, point_2d pt) {
  if (point_in_rectangle(pt, MENU_RECT)) {
    d.selected_shape = RECTANGLE;
  }
  if (point_in_triangle(pt, MENU_TRIANGLE)) {
    d.selected_shape = TRIANGLE;
  }
  if (point_in_circle(pt, MENU_CIRCLE)) {
    d.selected_shape = CIRCLE;
  }
  if (point_in_rectangle(pt, MENU_ELLIPSE)) {
    d.selected_shape = ELLIPSE;
  }
}

// Add a shape to the canvas
void process_canvas_click(drawing &d, point_2d pt) {
  // Try to add a shape... is the current index < maximum?
  if (d.index < MAX_SHAPES) {
    // Select the shape to add...
    switch (d.selected_shape) {
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
        return;  // jump out if no selected shape...
    }            // end switch
  }              // end if
}  // process pad click
