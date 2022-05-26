// Draw all of the lights in "lights"
void draw_lights(light lights[], int count)
{
    int i;

    for (i = 0; i < count; i++)
    {
        draw_light(lights[i]);
    }
}

// Is the light currently under the mouse?
bool light_under_mouse(light &l)
{
    point_2d mouse;
    bitmap light_bmp;

    // get the mouse position
    mouse = mouse_position();
    // get the light bitmap, to determine its size etc.
    light_bmp = light_bitmap(l);

    // Simple version using a bounded rectangle
    // return point_in_rect(mouse, bitmap_rectangle(l.position.x, l.position.y,
    // light_bmp));
    return bitmap_point_collision(light_bmp, l.position, mouse);
}

// Check if the lights have been changed (clicked)
void update_lights(light lights[], int count)
{
    int i;

    // only change if the mouse was clicked
    if (mouse_clicked(LEFT_BUTTON))
    {
        // for all of the lights
        for (i = 0; i < count; i++)
        {
            // if the light is under the mouse
            if (light_under_mouse(lights[i]))
            {
                // change state (on = off, off = on)
                lights[i].is_on = !lights[i].is_on;
            }
        }
    }
}
