/* Program: Draw Sun Scene */
#include "splashkit.h"

void draw_sun()
{
    // Draw the sun
    fill_circle(color_yellow(), 50.0, 50.0, 20);
    draw_circle(color_red(), 50.0, 50.0, 15);
    draw_circle(color_red(), 50.0, 50.0, 12);
    draw_circle(color_red(), 50.0, 50.0, 9);
    draw_circle(color_red(), 50.0, 50.0, 6);
    fill_circle(color_white(), 50.0, 50.0, 3);
    draw_line(color_yellow(), 50, 75, 50, 110);
    draw_line(color_yellow(), 25, 75, 0, 100);
    draw_line(color_yellow(), 75, 75, 100, 100);
    draw_line(color_yellow(), 0, 50, 25, 50);
    draw_line(color_yellow(), 75, 50, 100, 50);
    draw_line(color_yellow(), 25, 25, 0, 0);
    draw_line(color_yellow(), 75, 25, 100, 0);
    draw_line(color_yellow(), 50, 0, 50, 25);
}

int main()
{
    open_window("Draw Sun", 800, 600);

    clear_screen(color_blue());
    draw_sun();

    refresh_screen();
    delay(5000);

    return 0;
}
