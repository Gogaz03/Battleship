#include "Board.h"

void Board::fill_board()
{
    int k, x, y, p, q, pos;
    k = 0;
    for (int i = 0; i < 100; i++)
    {
        for (int i = 0; i < 12; i++)
        {
            for (int j = 0; j < 12; j++)
            {
                board1[i][j] = '?';
            }
        }
        for (int t1 = 0, t2 = 0; t1 < 4, t2 < 8; t1++, t2 += 2)
        {
            p = 0;
            while (k != (14 - t2))
            {
                pos = 1 + rand() % 2;
                if (pos == 1)
                {
                    x = 1 + rand() % 10;
                    y = 1 + rand() % (7 + t1);
                    k = 0;
                    for (int i = -1; i <= 4 - t1; i++)
                    {
                        if (board1[x - 1][y + i] == '?')
                            k++;
                        if (board1[x + 1][y + i] == '?')
                            k++;
                    }
                    if (board1[x][y + 4 - t1] == '?')
                        k++;
                    if (board1[x][y - 1] == '?')
                        k++;
                    if (k == 14 - t2)
                    {
                        for (int i = 0; i < 4 - t1; i++)
                        {
                            board1[x][y + i] = '#';
                        }
                        p++;
                    }
                }
                if (pos == 2)
                {
                    x = 1 + rand() % (7 + t1);
                    y = 1 + rand() % 10;
                    k = 0;
                    for (int i = -1; i <= 4 - t1; i++)
                    {
                        if (board1[x + i][y - 1] == '?')
                            k++;
                        if (board1[x + i][y + 1] == '?')
                            k++;
                    }
                    if (board1[x - 1][y] == '?')
                        k++;
                    if (board1[x + 4 - t1][y] == '?')
                        k++;
                    if (k == 14 - t2)
                    {
                        for (int i = 0; i < 4 - t1; i++)
                        {
                            board1[x + i][y] = '#';
                        }
                        p++;
                    }
                }
                k = 0;
                if (p == 1 + t1)
                    break;
            }
        }
        q = 0;
        for (int i = 1; i < 11; i++)
        {
            for (int j = 1; j < 11; j++)
            {
                if (board1[i][j] == '#')
                {
                    q++;
                }
            }
        }

    }
}

void Board::print_board()
{
    string F = " АБВГДЕЖЗИК";
    cout << "  1 2 3 4 5 6 7 8 9 10" << endl;
    for (int i = 1; i < 11; i++) {
        cout << F[i];
        for (int j = 1; j < 11; j++) {
            board2[i][j] = '?';
            cout << " " << board2[i][j];
        }
        cout << endl;
    }
}
