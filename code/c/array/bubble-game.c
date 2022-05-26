#include <stdbool.h>
#include <stdio.h>

#include "splashkit.h"

#define BUBBLE_COUNT 10

// Place a bubble somewhere on the screen,
// and give it a random movement
void place_bubble(sprite bubble)
{
    sprite_set_x(bubble, rnd(screen_width() - sprite_width(bubble)));
    sprite_set_y(bubble, rnd(screen_height() - sprite_height(bubble)));
    sprite_set_dx(bubble, (rnd() * 2) - 1);  // between +1 and -1
    sprite_set_dy(bubble, (rnd() * 2) - 1);  // between +1 and -1
}

// Create bubbles, and place them on the screen to start
void populate_bubbles(sprite bubbles[], int sz, bitmap bubble)
{
    int i;
    for (i = 0; i < sz; i++)
    {
        bubbles[i] = create_sprite(bubble);
        place_bubble(bubbles[i]);
    }
}

// Update the bubble, move it and check if it is off screen
void update_bubble(sprite bubble)
{
    update_sprite(bubble);  // Moves based on sprites dx,dy

    if (sprite_offscreen(bubble))  // is it off screen?
    {
        place_bubble(bubble);  // put it back on screen
    }
}

// Update all of the bubbles...
void update_bubbles(sprite bubbles[], int sz)
{
    int i;
    for (i = 0; i < sz; i++)
    {
        update_bubble(bubbles[i]);
    }
}

// Draw all of the bubbles
void draw_bubbles(sprite bubbles[], int sz)
{
    int i;
    for (i = 0; i < sz; i++)
    {
        draw_sprite(bubbles[i]);
    }
}

// A start of a bubble game...
// Requires "bubble.png" to be placed in Resources/images
int main()
{
    // Create an array of bubbles
    sprite bubbles[BUBBLE_COUNT];
    open_window("Bubble Pop!", 800, 600);

    // Load and populate the bubble bitmap
    bitmap bubble = load_bitmap("bubble", "Resources/images/bubble.png");
    populate_bubbles(bubbles, BUBBLE_COUNT, bubble);  // Load the bubbles

    do
    {
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
