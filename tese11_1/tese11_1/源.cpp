#define  _CRT_SECURE_NO_WARNINGS
���� :
#include <stdio.h>

int main() {
    // �ֱ����A��B��C��D�������µ���
    // 0�����ǣ�1������
    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            for (int c = 0; c <= 1; c++) {
                for (int d = 0; d <= 1; d++) {
                    // ��ֻ֤��һ�������˺���
                    if (a + b + c + d == 1) {
                        int countFalse = 0;
                        // A˵��������
                        if (a == 1 && !a) countFalse++;
                        // B˵����C
                        if (b == 1 && c) {
                        }
                        else if (b == 1 && !c) countFalse++;
                        // C˵����D
                        if (c == 1 && d) {
                        }
                        else if (c == 1 && !d) countFalse++;
                        // D˵������˵��Ҳ���ǲ���D��
                        if (d == 1 && !d) countFalse++;
                        if (countFalse == 1) {
                            if (a == 1) printf("A���˺���\n");
                            if (b == 1) printf("B���˺���\n");
                            if (c == 1) printf("C���˺���\n");
                            if (d == 1) printf("D���˺���\n");
                        }
                    }
                }
            }
        }
    }
    return 0;
}

L:
[��������]