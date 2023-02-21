
#include "engine/engine.h"
#include "engine/graphics/window.h"

int main()
{
    Engine::initialize();

    auto *m_window = new Window("Pong", 100, 100, 800, 600);




    SDL_Delay(5000);

    return 0;
}
