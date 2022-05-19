// Update all of the bubbles...
void update_bubbles(sprite bubbles[], int sz) {
  int i;
  for (i = 0; i < sz; i++) {
    update_bubble(bubbles[i]);
  }
}

// Draw all of the bubbles
void draw_bubbles(sprite bubbles[], int sz) {
  int i;
  for (i = 0; i < sz; i++) {
    draw_sprite(bubbles[i]);
  }
}

// A start of a bubble game...
// Requires "bubble.png" to be placed in Resources/images
int main() {
  // Create an array of bubbles
  sprite bubbles[BUBBLE_COUNT];
  open_window("Bubble Pop!", 800, 600);

  // Load and populate the bubble bitmap
  bitmap bubble = load_bitmap("bubble", "Resources/images/bubble.png");
  populate_bubbles(bubbles, BUBBLE_COUNT, bubble);  // Load the bubbles

  do {
    // Update the game...
    process_events();
    update_bubbles(bubbles, BUBBLE_COUNT);

    // Draw the game
    clear_screen();
    draw_bubbles(bubbles, BUBBLE_COUNT);

    refresh_screen(60);

  } while (!quit_requested());

  return 0;
}
