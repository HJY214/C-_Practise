#include<stdio.h>

int squart(int);

int squart(int num)
{
	return num * num;
}


int main()
{
	int num;
	int (*fp)(int);

	printf("����һ��������");

	scanf_s("%d", &num);

	fp = squart;

	printf("%d", (*fp)(num));

	return 0;
}