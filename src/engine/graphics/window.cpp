//
// Created by tim on 2/20/23.
// Copyright (c) 2023 tim. All rights reserved.
//

// Internal headers
#include "window.h"

// C++ Headers
#include <cstdio>

Window::Window(const char *title, int x, int y, int w, int h)
{
    m_title = title;
    m_xpos = x;
    m_ypos = y;
    m_width = w;
    m_height = h;
    m_window_flags = SDL_WINDOW_OPENGL;

    m_window = SDL_CreateWindow(m_title, m_xpos, m_ypos, m_width, m_height, m_window_flags);
    m_gl_context = SDL_GL_CreateContext(m_window);

    if (m_window = nullptr)
    {
        printf("Failed to create SDL Window!\n");
        printf("%s", SDL_GetError());
    }


}

Window::~Window()
{

}