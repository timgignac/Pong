//
// Created by tim on 2/20/23.
// Copyright (c) 2023 tim. All rights reserved.
//

// Internal header files
#include "engine.h"

// Dependency header files
#include <SDL2/SDL.h>

// C++ header files
#include <cstdio>

int Engine::initialize()
{
    // Initialize SDL
    initializeSdl();
}

int Engine::destroy()
{

}

/**
 * Initializes SDL and subsystems.
 */
void Engine::initializeSdl()
{
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) != 0)
    {
        printf("Failed to initialize SDL!\n");
        printf("%s", SDL_GetError());    }
    else
    {
        printf("SDL Initialized.\n");
    }
}