#include "Game.h"
#include <GLFW/glfw3.h>

void InitGame(GameInstance *gameInstance) {
    printf("Initializing Froggy...\n");
}

void MainGameLoop(GameInstance *gameInstance) {
    gameInstance->windowHandle = CreateGameWindow();

    while(!glfwWindowShouldClose(gameInstance->windowHandle)) {
        glfwSwapBuffers(gameInstance->windowHandle);

        glfwPollEvents();
    }
}

void ExitGame(GameInstance *gameInstance) {
    glfwDestroyWindow(gameInstance->windowHandle);

    glfwTerminate();

    printf("Exiting Froggy...");
}
