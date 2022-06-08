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
public:
	void fill_board();
	void print_board();
	char board1[10][10];
	char board2[10][10];
};

#endif 
