#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return 0;

}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//0-9
	int k = 7;
	int pos = binary_search(arr, k, 10);
	if (-1 == pos)
		printf("�Ҳ���\n");
	else
		printf("�ҵ��ˣ��±���:%d\n", pos);
	return 0;
}