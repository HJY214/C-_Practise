#include<conio.h>
#include< stdlib.h >
#include <stdio.h>

int main(void)

{
	char ch;

	while (!_kbhit())

	{
		printf("Hello World111\n");

		if (_kbhit())

		{
			ch = _getch();

			if (27 == ch)

				break;

		}

	}

	printf("End!\n");

	system("pause");

	return 0;

}