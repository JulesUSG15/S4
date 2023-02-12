#include "plateform.h"

Platform::Platform(int x, int y, int w, int h) {
    this->x = x;
    this->y = y;
    this->w = w;
    this->h = h;
    rect = {x, y, w, h};
}

Platform::~Platform() {
}

void Platform::draw(SDL_Renderer *renderer) {
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect);
}

SDL_Rect Platform::getRect() {
    return rect;
}

bool Platform::isColliding(Player player) {
    SDL_Rect playerRect = player.getRect();
    if (playerRect.x + playerRect.w >= rect.x && playerRect.x <= rect.x + rect.w) {
        if (playerRect.y + playerRect.h >= rect.y && playerRect.y <= rect.y + rect.h) {
            return true;
        }
    }
    return false;
}
