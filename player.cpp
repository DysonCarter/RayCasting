/*
    player.cpp

    Class for player
*/

#include "player.hpp"

void Player::draw(SDL_Renderer* renderer) {
    SDL_Rect rect = { x, y, size, size };
    SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF); // Red
    SDL_RenderFillRect(renderer, &rect);
}
