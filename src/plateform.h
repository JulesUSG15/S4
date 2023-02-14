#ifndef PLATFORM_H
#define PLATFORM_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include "player.h"
#include <vector>
using namespace std;

class Platform {
public:
    Platform(int x, int y, int w, int h);
    ~Platform();
    SDL_Rect getRect();
    bool isColliding(Player player);
    void push_back(Platform* platform);
private:
    int x, y, w, h;
    SDL_Rect rect;
};

#endif // PLATFORM_H