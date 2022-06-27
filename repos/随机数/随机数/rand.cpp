#include<iostream>
#include<cstdlib>
#include<ctime>

#define random(a,b) (rand() % (b-a)+ a + 1)
using namespace std;

int main()
{
	srand((int)time(0));
	for (int i = 0; i < 10; i++)
	{
		cout << random(0,5) << endl;
	}
}
