#include <SDL.h>
#include <stdbool.h>

#ifndef INPUT_H
#define INPUT_H

extern SDL_Event event;

// definition des variables d'input
bool zPressed;
bool sPressed;
bool qPressed;
bool dPressed;

bool jPressed;

void input();
void switchTrue();
void switchFalse();

#endif
