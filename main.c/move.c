#include <stdio.h>
#include "mouvement.h"
#include "draw.h"
#include "image.h"
#include "windowInit.h"
#include "input.h"

int vitesse = 10;

MovementFunctions shipMovement = { moveShipUp, moveShipDown, moveShipLeft, moveShipRight };

void moveShipUp() {
    if (shipPosY > 0) {
        shipPosY -= vitesse;
        player1Ship.position.y -= vitesse;
    }
}

void moveShipDown() {
    if (shipPosY < windowHeight - 50) {
        shipPosY += vitesse;
        player1Ship.position.y += vitesse;
    }
}

void moveShipLeft() {
    if (shipPosX > 0) {
        shipPosX -= vitesse;
        player1Ship.position.x -= vitesse;
    }
}

void moveShipRight() {
    if (shipPosX < windowWidth - 50) {
        shipPosX += vitesse;
        player1Ship.position.x += vitesse;
    }
}

void movement() {

    if (zPressed && !sPressed) {
        moveShipUp();
    }
    else if (!zPressed && sPressed) {
        moveShipDown();
    }

    if (qPressed && !dPressed) {
        moveShipLeft();
    }
    else if (!qPressed && dPressed) {
        moveShipRight();
    }
}