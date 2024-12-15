#pragma once

#include <stdio.h>
#include <GLFW/glfw3.h>

#include "../Window/Window.h"

typedef struct {
    GLFWwindow *windowHandle;
} GameInstance;

void InitGame(GameInstance*);
void MainGameLoop(GameInstance*);
void ExitGame(GameInstance*);
