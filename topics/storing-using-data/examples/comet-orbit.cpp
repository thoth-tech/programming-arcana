#include <stdbool.h>
#include <stdio.h>

#include "splashkit.h"

// Constant values
#define ECCENTRICITY 0.995f
#define DISTANCE_POLE_DIRECTRIX 1.828f
#define SUN_X 10
#define SUN_Y 300
#define SUN_RADIUS 30
#define COMET_RADIUS 4
#define MAX_DISTANCE 380.0f

#define MIN_WAIT 100
#define MAX_POPORTION_WAIT 900

// Calculated constants
const float SCREEN_SCALE_FACTOR = 800.0f / MAX_DISTANCE;

// r = ed / (1 + e sin(angle) )
float hale_bopp_r(float angle) {
  return ECCENTRICITY * DISTANCE_POLE_DIRECTRIX /
         (1 + ECCENTRICITY * sine(angle));
}

float comet_y_to_screen_x(float y) {
  float result;

  // Scale to screen coordinates... reverse sign (- to +)
  result = y * -SCREEN_SCALE_FACTOR;

  // Translate so 0,0 is at SUN_X,SUNY
  result = result + SUN_X;

  return result;
}

float comet_x_to_screen_y(float x) {
  float result;

  // Scale to screen coordinates
  result = x * SCREEN_SCALE_FACTOR;

  // Translate so 0,0 is at SUN_X,SUNY
  result = result + SUN_Y;

  return result;
}
