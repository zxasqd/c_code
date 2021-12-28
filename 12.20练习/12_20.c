#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//main()
//{
//	int a = 0, b = 0, c = 0;
//	if (a = b + c) printf("***\n");
//	else printf("$$$\n");
//}
//int main()
//{
//	int i = 10;
//	int* p = &i;
//	int* * q = &p;
//	printf("%d\n",i);
//	printf("%d\n", *p);
//	printf("%d\n", **q);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i=0;i<3;i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}
//int get_strlen(char* str)
//{
//	
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//		
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = (i);
//	scanf("%s", &i);
//
//	int len= get_strlen(i);
//	printf("%d\n", len);
//	return 0;
//}
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int f=fib(n);
//	printf("%d\n", f);
//	return 0;
//}
//int get_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//
//	while (*end!='\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len=get_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
/*id emnu()
{
	printf("*************************\n");
	printf("****1,play     0.exit****\n");
	printf("*************************\n");
}
void game()
{
	int i = 0;
	int ret = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("猜数字:");
		scanf("%d", &i);
		if (i < ret)
		{
			printf("猜小了\n");		
		}
		else if (i > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		
		}
	}
}
int main()
{
	srand((unsigned int) time(NULL));
	int i = 0;
	
	do
	{
		emnu();
		printf("请输入：");
		scanf("%d", &i);
		if (i == 1)
		{
			game();
		}
		else if (i == 2)
		{
			printf("退出游戏");
			break;
		}
		else
		{
			printf("输入错误，请重新输入：");
		}
	} while (i);
	return 0;
}*/

