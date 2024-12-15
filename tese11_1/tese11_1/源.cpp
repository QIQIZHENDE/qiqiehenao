#define  _CRT_SECURE_NO_WARNINGS
雅珂 :
#include <stdio.h>

int main() {
    // 分别假设A、B、C、D是做好事的人
    // 0代表不是，1代表是
    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            for (int c = 0; c <= 1; c++) {
                for (int d = 0; d <= 1; d++) {
                    // 保证只有一个人做了好事
                    if (a + b + c + d == 1) {
                        int countFalse = 0;
                        // A说：不是我
                        if (a == 1 && !a) countFalse++;
                        // B说：是C
                        if (b == 1 && c) {
                        }
                        else if (b == 1 && !c) countFalse++;
                        // C说：是D
                        if (c == 1 && d) {
                        }
                        else if (c == 1 && !d) countFalse++;
                        // D说：他胡说（也就是不是D）
                        if (d == 1 && !d) countFalse++;
                        if (countFalse == 1) {
                            if (a == 1) printf("A做了好事\n");
                            if (b == 1) printf("B做了好事\n");
                            if (c == 1) printf("C做了好事\n");
                            if (d == 1) printf("D做了好事\n");
                        }
                    }
                }
            }
        }
    }
    return 0;
}

L:
[动画表情]