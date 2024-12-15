#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int is_leap_year(int y)
{
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
	{
		return 1;
	}
	return 0;
}
int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (is_leap_year(y))
		{
			printf("%d ", y);
		}
		    
	}

	return 0;
}
