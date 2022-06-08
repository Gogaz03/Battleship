#include "Board.h"
#include "Game.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand((unsigned)time(NULL));

    Game a;
    a.fill_board();
    a.print_board();
    a.game();
    return 0;
}
