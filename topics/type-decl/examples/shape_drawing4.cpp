// the input procedure
bool process_input(drawing &d)
{
    if (mouse_clicked(LEFT_BUTTON))
    {
        point_2d pt = mouse_position();

        if (pt.x < 60)
            process_menu_click(d, pt);
        else
            process_canvas_click(d, pt);
    }  // if LEFT BUTTON

    if (any_key_pressed())
        return true;
    else
        return false;
}  // process input

void setup_drawing(drawing &d)
{
    // Start adding at index 0
    d.index = 0;

    // All shapes are unknown...
    for (int i = 0; i < MAX_SHAPES; ++i)
    {
        d.shapes[i].type = NONE;
    }
}

// main
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
        process_events();  // read user interactions...
        quit = process_input(my_drawing);

        do_drawing(my_drawing);
        refresh_screen();
    } while (!quit_requested() && !quit);

    return 0;
}
