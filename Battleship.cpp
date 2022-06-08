#include "Board.h"
#include "Game.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand((unsigned)time(NULL));

    Game play;
    play.fill_board();
    play.print_board();
    play.game();
    return 0;
}
