#include "Board.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand((unsigned)time(NULL));

    Board a;
    a.fill_board();
    a.print_board();
    a.game();
    return 0;
}
