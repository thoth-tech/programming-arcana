#include <stdbool.h>
#include <stdio.h>

#include "splashkit.h"

#define BUBBLE_COUNT 10

// Place a bubble somewhere on the screen,
// and give it a random movement
void place_bubble(sprite bubble) {
  sprite_set_x(bubble, rnd(screen_width() - sprite_width(bubble)));
  sprite_set_y(bubble, rnd(screen_height() - sprite_height(bubble)));
  sprite_set_dx(bubble, (rnd() * 2) - 1);  // between +1 and -1
  sprite_set_dy(bubble, (rnd() * 2) - 1);  // between +1 and -1
}

// Create bubbles, and place them on the screen to start
void populate_bubbles(sprite bubbles[], int sz, bitmap bubble) {
  int i;
  for (i = 0; i < sz; i++) {
    bubbles[i] = create_sprite(bubble);
    place_bubble(bubbles[i]);
  }
}

// Update the bubble, move it and check if it is off screen
void update_bubble(sprite bubble) {
  update_sprite(bubble);  // Moves based on sprites dx,dy

  if (sprite_offscreen(bubble))  // is it off screen?
  {
    place_bubble(bubble);  // put it back on screen
  }
}
