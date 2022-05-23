#ifndef VV
#define VV
#include <iostream>
#include <locale>
#include <cstdlib>
#include <windows.h>
#include <mmsystem.h>

using namespace std;

class Board
{
	char board1[10][10];
	char board2[10][10];
public:
	void fill_board();
	void print_board();
	void game();
};

#endif 
