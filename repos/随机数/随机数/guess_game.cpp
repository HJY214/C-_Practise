#include<iostream>
#include<cstdlib>
#include<ctime>

#define random(a,b) (rand() % (b-a)+ a + 1)
int game_mode = 0;
using namespace std;

int main()
{
	srand((int)time(0));
	system("");
	game_mode = random(0, 5);
	if (game_mode == 1)
	{
		
	}
	else if (game_mode == 2)
	{

	}
	else if (game_mode == 3)
	{

	}
	else if (game_mode == 4)
	{

	}
	else if (game_mode == 5)
	{

	}
}