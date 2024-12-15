#include "Window.h"
#include <GLFW/glfw3.h>

GLFWwindow *CreateGameWindow() {
    glfwInit();

    GLFWwindow *window;

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE, NULL, NULL);

    return window;
}
