#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 0;
//	return 0;
//}
//int get(int a)
//{
//	int n = 0;
//	int count = 0;
//	for (n = 0; n < 32; n++)
//	{
//		if (((a >> n)&1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count=get(a);
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,67,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//void move(char x, char y)
//{
//	printf("%c->%c", x, y);
//}
//void hannuo(int n, char one, char two, char three)
//{
//	if (n == 1)
//	{
//		printf("%c->%c ", one, three);
//	}
//	else
//	{
//		hannuo(n-1, one, three, two);
//		printf("%c->%c ", one, three);
//		hannuo(n - 1, two, one, three);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("input your number:");
//	scanf("%d", &n);
//	hannuo(n, 'A', 'B', 'C');
//	return 0;
//}
//void hannuo(int a, char pos1, char pos2, char pos3)
//{
//	if (a == 1)
//	{
//		printf("%c->%c ", pos1, pos3);
//	}
//	else
//	{
//		hannuo(a - 1, pos1, pos3, pos2);
//		printf("%c->%c ", pos1, pos3);
//		hannuo(a - 1, pos2, pos1, pos3);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	hannuo(a, 'A', 'B', 'C');
//	return 0;
//}
//int jump(int n)
//{
//	int a = 1;
//	int b = 2;
//	int c = a;
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
//	int ret = jump(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int jump(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return jump(n - 2) + jump(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret= jump(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int get(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//int get(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = get(a);
//	printf("%d\n", count);
//	return 0;
//}
// 求两个数的二进制有多少位是不同的
//相同为0，不同为1，再按位与看看有多少个1
//int diff(int a, int b)
//{
//	int count = 0;
//	int tmp = a ^ b;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int count=diff(a, b);
//	printf("%d\n", count);
//	return 0;
//}
double Pow(int n, int k )
{
	if (k < 0)
	{
		k = -k;
		return 1 / (n * Pow(n, k, -1));
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return n * Pow(n, k, -1);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d",&n,&k);
	double ret = Pow(n, k);
	printf("ret=%lf\n", ret);
	return 0;
}