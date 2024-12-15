#include "Game/Game.h"

int main(void) {
    GameInstance gameInstance;

    InitGame(&gameInstance);
    MainGameLoop(&gameInstance);
    ExitGame(&gameInstance);

    return 0;
}
