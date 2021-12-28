#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//
// int get(int n)
//{
//	if (n >= 2)
//	{
//		return n*get(n - 1);
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret=get(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] ="abcdefg";
//	int len = 0;
//	len=my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//void maopao(int arr[], int sz)
//{
//	int n = 0;
//	for (n = 0; n <= sz - 1; n++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - n; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,7,8,6,5,4,3,2,1 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	maopao(arr,sz);
//	printf("%d\n", sz);
//	for (i = 0; i <sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
