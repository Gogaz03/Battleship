#include "Game.h"

void Game::game()
{
        int score = 0;
        string F = " АБВГДЕЖЗИК";
        int stolb;
        string stroka;
        int znachstr = 0;
        stolb = 1;
        while (stolb != 0)

        {
            if (score == 20) {
                cout << "Победа!";
            }
            else {
                cout << "Сделайте ход" << endl;
                cout << "Строка: ";
                cin >> stroka;
                if (stroka == "А") {
                    znachstr = 1;
                }
                else if (stroka == "Б") {
                    znachstr = 2;
                }
                else if (stroka == "В") {
                    znachstr = 3;
                }
                else if (stroka == "Г") {
                    znachstr = 4;
                }
                else if (stroka == "Д") {
                    znachstr = 5;
                }
                else if (stroka == "Е") {
                    znachstr = 6;
                }
                else if (stroka == "Ж") {
                    znachstr = 7;
                }
                else if (stroka == "З") {
                    znachstr = 8;
                }
                else if (stroka == "И") {
                    znachstr = 9;
                }
                else if (stroka == "К") {
                    znachstr = 10;
                }
                cout << "Столбец: ";
                cin >> stolb;
                if (board1[znachstr][stolb] == '#') {
                    score += 1;
                    board2[znachstr][stolb] = 'x';
                }
                else if (board1[znachstr][stolb] == 'x') {
                    board2[znachstr][stolb] = 'x';
                }
                else {
                    board2[znachstr][stolb] = '*';
                }
                system("cls");
                cout << "  1 2 3 4 5 6 7 8 9 10" << endl;
                for (int i = 1; i < 11; i++)
                {
                    cout << F[i];
                    for (int j = 1; j < 11; j++)
                    {
                        cout << " " << board2[i][j];
                    }
                    cout << endl;
                }
            }
        }
}
