#include <SDL.h>
#include <stdio.h>
#include "windowInit.h"
#include "image.h"
#include "draw.h"


void drawShips() {
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // Couleur : Rouge
    SDL_Rect rect = { shipPosX, shipPosY, 50, 50 }; // Position (100, 100), Largeur 200, Hauteur 200
    SDL_RenderFillRect(renderer, &rect);
}




