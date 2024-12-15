#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int left = 0;
	int right = 0;
	int flag = 0;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid < k])
		{
			left = mid - 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		printf("找不到\n");

	return 0;

}




  