#include <SDL.h>

#ifndef IMAGE_H
#define IMAGE_H

extern SDL_Renderer* renderer;

void loadImages();
void loadAndRenderImage(const char* imagePath);
void drawShips();




// Structure pour stocker les informations d'une image
typedef struct {
    SDL_Texture* texture;
    SDL_Rect position;
} ImageObject;

ImageObject player1Ship;


#endif
