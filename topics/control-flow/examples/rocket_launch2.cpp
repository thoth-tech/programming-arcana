
// ======================
// = Main - Entry Point =
// ======================

// Run the rocket launch...
int main() {
  // declare variables
  int rocket_x, rocket_y;
  bool thrusters_on = false;
  color rocket_color;

  open_audio();
  open_window("Rocket Launch", 800, 600);

  // initialise the rocket position, color
  rocket_color = color_blue();
  rocket_y = screen_height() - ROCKET_HEIGHT;
  rocket_x = (screen_width() - ROCKET_WIDTH) / 2;

  load_resources();

  while (!window_close_requested("Rocket Launch") && !key_typed(ESCAPE_KEY)) {
    // let splashkit process user input
    process_events();

    // Update the rocket
    update_rocket(rocket_y,
                  thrusters_on);  // parameters passed by reference (C++)

    // draw the rocket on the screen!
    clear_screen();
    draw_rocket(rocket_color, rocket_x, rocket_y, thrusters_on);
    refresh_screen();
  }

  close_audio();

  return 0;
}
