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

// ��������
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
        printf("�����µ�����: %c\n", goodDeedPerson);
    }
    else {
        printf("�޷�ȷ�������µ��ˡ�\n");
    }

    return 0;
}

// ������ͬѧ�Ƿ��������µ��ˣ�����֤ÿ���˵ĳ���
bool checkStatements(char goodDeedPerson) {
    bool A_statement = (goodDeedPerson != 'A');
    bool B_statement = (goodDeedPerson == 'C');
    bool C_statement = (goodDeedPerson == 'D');
    bool D_statement = !(A_statement || B_statement || C_statement); // D˵������˵������A��B��C��������һ��˵�ٻ�

    int trueCount = 0;
    if (A_statement) trueCount++;
    if (B_statement) trueCount++;
    if (C_statement) trueCount++;
    if (D_statement) trueCount++;

    return trueCount == 3; // ������˵�滰
}