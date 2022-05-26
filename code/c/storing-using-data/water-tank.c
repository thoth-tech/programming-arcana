#include "splashkit.h"

#define MAX_HEIGHT 400
#define MAX_WIDTH 200

void draw_water_tank(float x, float y, int width, int height, float pct_full)
{
    float ellipse_height;
    float body_height, body_y;
    float bottom_ellipse_y, top_ellipse_y;
    float water_height, water_y;

    ellipse_height = height * 0.1;
    body_height =
        height - ellipse_height;  // the area for the center of the cylinder
    body_y = y + ellipse_height / 2;
    bottom_ellipse_y = (y + height) - ellipse_height;

    water_height = pct_full * body_height;
    water_y = body_y + (body_height - water_height);
    top_ellipse_y = water_y - ellipse_height / 2;

    // Water...
    // Bottom ellipse
    fill_ellipse(color_blue(), x, bottom_ellipse_y, width, ellipse_height);
    draw_ellipse(color_black(), x, bottom_ellipse_y, width, ellipse_height);
    // Body - center of cylinder
    fill_rectangle(color_blue(), x, water_y, width, water_height);
    // Top ellipse
    fill_ellipse(color_blue(), x, top_ellipse_y, width, ellipse_height);
    draw_ellipse(color_black(), x, top_ellipse_y, width, ellipse_height);

    // Frame
    draw_ellipse(color_black(), x, y, width, ellipse_height);
    draw_line(color_black(), x, y + ellipse_height / 2, x,
              bottom_ellipse_y + ellipse_height / 2);
    draw_line(color_black(), x + width, y + ellipse_height / 2, x + width,
              bottom_ellipse_y + ellipse_height / 2);
}

int main(int argc, char* argv[])
{
    open_window("Water Tanks", 800, 600);

    clear_screen(color_white());
    draw_water_tank(10, 50, 100, 200, 0.75);
    draw_water_tank(150, 50, 100, 300, 0.0);
    draw_water_tank(300, 50, 70, 100, 0.25);
    draw_water_tank(450, 50, rnd() * MAX_HEIGHT, rnd() * MAX_WIDTH, 0.25);
    refresh_screen();

    delay(5000);
    return 0;
}
