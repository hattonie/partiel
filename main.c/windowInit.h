#include <SDL.h>

#ifndef WINDOWINIT_H
#define WINDOWINIT_H

extern int windowWidth;
extern int windowHeight;

extern SDL_Renderer* renderer;
extern SDL_Window* window;

int initSDLWindow();
void freeAll();
void clearRender();

#endif