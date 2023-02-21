//
// Created by tim on 2/20/23.
// Copyright (c) 2023 tim. All rights reserved.
//

#ifndef PONG_SRC_ENGINE_GRAPHICS_WINDOW_H
#define PONG_SRC_ENGINE_GRAPHICS_WINDOW_H

#include <SDL2/SDL.h>

class Window
{
public:
    Window(const char *title, int x, int y, int w, int h);
    ~Window();

private:
    SDL_Window *m_window = nullptr;
    SDL_GLContext m_gl_context = nullptr;

    Uint32 m_window_flags;

    const char *m_title;
    int m_width;
    int m_height;
    int m_xpos;
    int m_ypos;

};
#endif //PONG_SRC_ENGINE_GRAPHICS_WINDOW_H
