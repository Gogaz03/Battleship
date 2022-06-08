#ifndef rr
#define rr
#include <iostream>
#include <locale>
#include <cstdlib>
#include <windows.h>
#include <mmsystem.h>
#include "Board.h"

using namespace std;

class Game : public Board
{
public:
	void game();
};

#endif 
