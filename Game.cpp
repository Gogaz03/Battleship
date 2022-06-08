#include "Game.h"

void Game::game()
{
        int score = 0;
        string F = " АБВГДЕЖЗИК";
        string stolb;
        string stroka;
        stroka = "1";
        stolb = "1";
        int znachstr;
        int znachstlb;
        while (stolb != "0")

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
                if (stolb == "1") {
                    znachstlb = 1;
                }
                else if (stolb == "2") {
                    znachstlb = 2;
                }
                else if (stolb == "3") {
                    znachstlb = 3;
                }
                else if (stolb == "4") {
                    znachstlb = 4;
                }
                else if (stolb == "5") {
                    znachstlb = 5;
                }
                else if (stolb == "6") {
                    znachstlb = 6;
                }
                else if (stolb == "7") {
                    znachstlb = 7;
                }
                else if (stolb == "8") {
                    znachstlb = 8;
                }
                else if (stolb == "9") {
                    znachstlb = 9;
                }
                else if (stolb == "10") {
                    znachstlb = 10;
                }
                if (board1[znachstr][znachstlb] == '#') {
                    score += 1;
                    board2[znachstr][znachstlb] = 'x';
                }
                else if (board1[znachstr][znachstlb] == 'x') {
                    board2[znachstr][znachstlb] = 'x';
                }
                else {
                    board2[znachstr][znachstlb] = '*';
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

