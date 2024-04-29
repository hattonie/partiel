#include <stdio.h>
#include <stdbool.h>
#include <SDL.h>
#include <stdlib.h>
#include <time.h>
#include "image.h"
#include "input.h"
#include "fruit.h"

#include "windowInit.h"

#include "draw.h"



SDL_Event event;

int main() {
    srand(time(NULL));
    // Initialisation des bibliothèques externes
    if (initSDLWindow() != 0) {
        printf("Failed to initialize SDL window\n");
        return -1;
    }



    while (1) {
        // Initialisation des éléments pour cette itération
        
        clearRender();

        drawShips();
        
        input();

        drawFruit();

        // Mise à jour des éléments du jeu


 
        SDL_RenderPresent(renderer);
        SDL_Delay(10);
    }

    // Libération des ressources à la fin du programme
    freeAll();

    return 0;
}
