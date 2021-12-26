#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void print(int a)
//{
//	if (a > 9)
//	{
//		print(a / 10);
//	}
//	printf("%d ", a % 10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}
//void print(int* p, int sz)
//{
//	int a = 0;
//	for (a = 0; a < sz; a++)
//	{
//		printf("%d ", *(p + a));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//int fn(int n)
//{
//	/*int i = 1;
//	if (i <= n)
//	{
//		return i*fn(i+1);
//	}
//	return i;*/
//	/*if (n <= 1)	
//		return 1;
//	else
//		return n * fn(n - 1);*/
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret=fn(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int fn(int n)
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
//	int ret = 0;
//	scanf("%d", &n);
//	ret=fn(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int my_strlen(char* p)
//{
//	if (*p != '\0')
//	{
//		return 1+my_strlen(p + 1);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int ret = 0;
//	ret=my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}
void maopao(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i <=sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0,29};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	maopao(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
