#include "../../Deps/GLFW/include/GLFW/glfw3.h"

struct WindowInstance {
    GLFWwindow *windowInstance;
    int windowWidth;
    int windowHeight;
    const char *windowTitle;
};

void CreateGameWindow();
void MainGameLoop();
void DestroyGameWindow();