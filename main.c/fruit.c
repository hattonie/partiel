#include <SDL.h>
#include "windowInit.h"

void drawFruit() {
    int randNbX = rand() % 1100;
    int randNbY = rand() % 600;
    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255); // Couleur : Rouge
    SDL_Rect rect = { randNbX, randNbY, 50, 50 }; // Position (100, 100), Largeur 200, Hauteur 200
    SDL_RenderFillRect(renderer, &rect);
}
