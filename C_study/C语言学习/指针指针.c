#include<stdio.h>

//int main()
//{
//	int num = 1244;
//	int* p = &num;
//	int** pp = &p;
//
//	printf("num: %d \n", num);
//	printf("*p: %d \n", *p);
//	printf("**pp: %d\n", **pp);
//	printf("&p: %p,pp: %p\n", &p, pp);
//	printf("&num: %p,p: %p,*pp: %p\n", &num, p,*pp);
//
//	return 0;
//}

//int main()
//{
//	char* cbook[] = {
//		"《C程序语言》",
//		"《C专家编程》",
//		"《C Primer Plus》",
//		"《带你学习带你飞》",
//		"《C和指针》"
//	};
//
//	char** byFISHC;
//	char** jiayulove[3];
//	int i;
//
//	byFISHC = &cbook[3];
//	jiayulove[0] = &cbook[0];
//	jiayulove[1] = &cbook[1];
//	jiayulove[2] = &cbook[2];
//	jiayulove[3] = &cbook[4];
//
//	printf("fish出版的书：%s \n", *byFISHC);
//	printf("jiayulove的书：\n");
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%s \n", *jiayulove[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int array[3][4] = { {1,2,3,5},{4,5,6,1},{7,8,9,10} };
//	int i ,j;
//	//int** p = &array;
//	int(*p)[4] = array;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf(" %2d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}