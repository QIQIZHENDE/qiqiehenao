#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int c = 1;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c; 
//		c = tmp;
//	}
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//	return 0;
//}
//
#include <stdio.h>
#include <stdbool.h>

// 函数声明
bool checkStatements(char goodDeedPerson);

int main() {
    char possiblePersons[] = { 'A', 'B', 'C', 'D' };
    char goodDeedPerson = '\0';

    for (int i = 0; i < 4; i++) {
        if (checkStatements(possiblePersons[i])) {
            goodDeedPerson = possiblePersons[i];
            break;
        }
    }

    if (goodDeedPerson != '\0') {
        printf("做好事的人是: %c\n", goodDeedPerson);
    }
    else {
        printf("无法确定做好事的人。\n");
    }

    return 0;
}

// 检查给定同学是否是做好事的人，并验证每个人的陈述
bool checkStatements(char goodDeedPerson) {
    bool A_statement = (goodDeedPerson != 'A');
    bool B_statement = (goodDeedPerson == 'C');
    bool C_statement = (goodDeedPerson == 'D');
    bool D_statement = !(A_statement || B_statement || C_statement); // D说“他胡说”，即A、B、C中至少有一人说假话

    int trueCount = 0;
    if (A_statement) trueCount++;
    if (B_statement) trueCount++;
    if (C_statement) trueCount++;
    if (D_statement) trueCount++;

    return trueCount == 3; // 三个人说真话
}