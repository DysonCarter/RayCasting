/*
    player.hpp

    Include for player class
*/

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <SDL2/SDL.h>

class Player {
public:
    int x;
    int y;
    int speed;
    int size;
public:
    Player() : x(200), y(200), speed(0), size(20) {}
    void draw(SDL_Renderer* renderer);
};

#endif
