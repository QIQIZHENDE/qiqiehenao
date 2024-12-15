#define _CRT_SECURE_NO_WARNINGS
//#include<stdlib.h>
#include<stdio.h>
//
int main()
{
	int num1 = 1;
	int num2 = 2;
	/*num1& num2;*/
	num1 | num2;
	/*num1^ num2*/
	printf("%d %d", num1, num2);
	return 0;
}