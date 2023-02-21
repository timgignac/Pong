//
// Created by tim on 2/20/23.
// Copyright (c) 2023 tim. All rights reserved.
//

#ifndef PONG_SRC_ENGINE_ENGINE_H
#define PONG_SRC_ENGINE_ENGINE_H

class Engine
{
public:
    /**
     * Creates the singleton engine instance.
     * @return Address of Engine instance.
     */
    static Engine& instance()
    {
        static Engine instance;
        return instance;
    }

    /**
     * Delete the constructor.
     */
    Engine(Engine const&) = delete;
    void operator = (Engine const&) = delete;

    /**
     * Initialize the engine and subsystems.
     * @return 0: Success, 1: Failure
     */
    static int initialize();

    /**
     * Destroys the engine and subsystems.
     * @return 0: Success, 1: Failure
     */
    static int destroy();

private:
    Engine() = default;
    ~Engine() = default;

    static void initializeSdl();
};

#endif //PONG_SRC_ENGINE_ENGINE_H
