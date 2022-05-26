#include "splashkit.h"

int main(int argc, char *argv[])
{
    open_window("Long Code", 800, 600);

    // First Background
    // Draw the background
    fill_rectangle(color_blue(), 0, 0, 800, 300);
    fill_rectangle(color_green(), 0, 300, 800, 300);
    refresh_screen();

    delay(1000);

    // Second Sun
    // Draw the background
    fill_rectangle(color_blue(), 0, 0, 800, 300);
    fill_rectangle(color_green(), 0, 300, 800, 300);
    refresh_screen();

    delay(200);

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
    refresh_screen();

    delay(1000);

    // Third Face
    // Draw the background
    fill_rectangle(color_blue(), 0, 0, 800, 300);
    fill_rectangle(color_green(), 0, 300, 800, 300);
    refresh_screen();
    delay(200);

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
    refresh_screen();
    delay(200);

    // Draw Face
    fill_circle(color_pink(), 100, 250, 80);
    fill_ellipse(color_white(), 40, 240, 40, 30);
    fill_ellipse(color_white(), 120, 240, 40, 30);
    fill_circle(color_blue(), 67, 260, 10);
    fill_circle(color_blue(), 132, 260, 10);
    fill_triangle(color_red(), 100, 240, 85, 280, 115, 280);
    draw_triangle(color_black(), 100, 240, 85, 280, 115, 280);
    fill_triangle(color_red(), 100, 290, 100, 310, 70, 300);
    fill_triangle(color_red(), 100, 290, 100, 310, 130, 300);
    draw_triangle(color_black(), 100, 290, 100, 310, 70, 300);
    draw_triangle(color_black(), 100, 290, 100, 310, 130, 300);

    refresh_screen();

    delay(1000);

    // Fourth House
    // Draw the background
    fill_rectangle(color_blue(), 0, 0, 800, 300);
    fill_rectangle(color_green(), 0, 300, 800, 300);
    refresh_screen();
    delay(200);

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
    refresh_screen();
    delay(200);

    // Draw Face
    fill_circle(color_pink(), 100, 250, 80);
    fill_ellipse(color_white(), 40, 240, 40, 30);
    fill_ellipse(color_white(), 120, 240, 40, 30);
    fill_circle(color_blue(), 67, 260, 10);
    fill_circle(color_blue(), 132, 260, 10);
    fill_triangle(color_red(), 100, 240, 85, 280, 115, 280);
    draw_triangle(color_black(), 100, 240, 85, 280, 115, 280);
    fill_triangle(color_red(), 100, 290, 100, 310, 70, 300);
    fill_triangle(color_red(), 100, 290, 100, 310, 130, 300);
    draw_triangle(color_black(), 100, 290, 100, 310, 70, 300);
    draw_triangle(color_black(), 100, 290, 100, 310, 130, 300);
    refresh_screen();
    delay(200);

    // Draw House
    fill_triangle(color_red(), 300, 160, 200, 260, 400, 260);
    fill_rectangle(color_gray(), 210, 260, 180, 180);
    fill_rectangle(color_black(), 215, 300, 80, 140);
    fill_rectangle(color_light_gray(), 300, 300, 80, 60);
    fill_triangle(color_yellow(), 345, 300, 380, 300, 380, 355);
    fill_triangle(color_yellow(), 300, 300, 300, 355, 335, 300);
    fill_circle(color_yellow(), 280, 370, 3);
    refresh_screen();

    delay(1000);

    // Fifth Tree
    // Draw the background
    fill_rectangle(color_blue(), 0, 0, 800, 300);
    fill_rectangle(color_green(), 0, 300, 800, 300);
    refresh_screen();
    delay(200);

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
    refresh_screen();
    delay(200);

    // Draw Face
    fill_circle(color_pink(), 100, 250, 80);
    fill_ellipse(color_white(), 40, 240, 40, 30);
    fill_ellipse(color_white(), 120, 240, 40, 30);
    fill_circle(color_blue(), 67, 260, 10);
    fill_circle(color_blue(), 132, 260, 10);
    fill_triangle(color_red(), 100, 240, 85, 280, 115, 280);
    draw_triangle(color_black(), 100, 240, 85, 280, 115, 280);
    fill_triangle(color_red(), 100, 290, 100, 310, 70, 300);
    fill_triangle(color_red(), 100, 290, 100, 310, 130, 300);
    draw_triangle(color_black(), 100, 290, 100, 310, 70, 300);
    draw_triangle(color_black(), 100, 290, 100, 310, 130, 300);
    refresh_screen();
    delay(200);

    // Draw House
    fill_triangle(color_red(), 300, 160, 200, 260, 400, 260);
    fill_rectangle(color_gray(), 210, 260, 180, 180);
    fill_rectangle(color_black(), 215, 300, 80, 140);
    fill_rectangle(color_light_gray(), 300, 300, 80, 60);
    fill_triangle(color_yellow(), 345, 300, 380, 300, 380, 355);
    fill_triangle(color_yellow(), 300, 300, 300, 355, 335, 300);
    fill_circle(color_yellow(), 280, 370, 3);
    refresh_screen();
    delay(200);

    // Draw Tree
    fill_triangle(color_green(), 500, 75, 440, 150, 560, 150);
    fill_ellipse(color_turquoise(), 400, 380, 200, 100);
    fill_rectangle(color_black(), 495, 274, 20, 160);
    fill_triangle(color_green(), 500, 120, 400, 275, 600, 275);
    fill_circle(color_red(), 490, 150.0, 3);
    fill_circle(color_red(), 510, 170, 4);
    fill_circle(color_red(), 480, 240, 3);
    fill_circle(color_red(), 560, 260, 5);
    refresh_screen();

    delay(1000);

    // Sixth Flats
    // Draw the background
    fill_rectangle(color_blue(), 0, 0, 800, 300);
    fill_rectangle(color_green(), 0, 300, 800, 300);
    refresh_screen();
    delay(200);

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
    refresh_screen();
    delay(200);

    // Draw Face
    fill_circle(color_pink(), 100, 250, 80);
    fill_ellipse(color_white(), 40, 240, 40, 30);
    fill_ellipse(color_white(), 120, 240, 40, 30);
    fill_circle(color_blue(), 67, 260, 10);
    fill_circle(color_blue(), 132, 260, 10);
    fill_triangle(color_red(), 100, 240, 85, 280, 115, 280);
    draw_triangle(color_black(), 100, 240, 85, 280, 115, 280);
    fill_triangle(color_red(), 100, 290, 100, 310, 70, 300);
    fill_triangle(color_red(), 100, 290, 100, 310, 130, 300);
    draw_triangle(color_black(), 100, 290, 100, 310, 70, 300);
    draw_triangle(color_black(), 100, 290, 100, 310, 130, 300);
    refresh_screen();
    delay(200);

    // Draw House
    fill_triangle(color_red(), 300, 160, 200, 260, 400, 260);
    fill_rectangle(color_gray(), 210, 260, 180, 180);
    fill_rectangle(color_black(), 215, 300, 80, 140);
    fill_rectangle(color_light_gray(), 300, 300, 80, 60);
    fill_triangle(color_yellow(), 345, 300, 380, 300, 380, 355);
    fill_triangle(color_yellow(), 300, 300, 300, 355, 335, 300);
    fill_circle(color_yellow(), 280, 370, 3);
    refresh_screen();
    delay(200);

    // Draw Tree
    fill_triangle(color_green(), 500, 75, 440, 150, 560, 150);
    fill_ellipse(color_turquoise(), 400, 380, 200, 100);
    fill_rectangle(color_black(), 495, 274, 20, 160);
    fill_triangle(color_green(), 500, 120, 400, 275, 600, 275);
    fill_circle(color_red(), 490, 150.0, 3);
    fill_circle(color_red(), 510, 170, 4);
    fill_circle(color_red(), 480, 240, 3);
    fill_circle(color_red(), 560, 260, 5);
    refresh_screen();
    delay(200);

    // Draw the block
    fill_rectangle(color_red(), 620, 50, 160, 450);
    fill_rectangle(color_black(), 640, 75, 40, 60);
    fill_rectangle(color_light_gray(), 720, 75, 40, 60);
    fill_rectangle(color_gray(), 640, 225, 40, 60);
    fill_rectangle(color_yellow(), 720, 225, 40, 60);
    fill_rectangle(color_black(), 670, 380, 60, 120);
    refresh_screen();

    delay(2000);

    return 0;
}
