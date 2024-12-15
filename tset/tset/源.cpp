#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Min(int arr[3][3])
{
	int min = arr[0][0];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}
int Max(int arr[3][3])
{
	int max = arr[0][0];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}
int main()
{

	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int max = Max(arr);
	int min = Min(arr);
	printf("%d %d",max,min);
	return 0;
}