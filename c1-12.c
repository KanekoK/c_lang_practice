#include <stdio.h>

/*
入力した単語を1行に一つずつ印字するプログラムを書け。
*/

#define IN  1
#define OUT 0

int main()
{
    int nowstatus;
    int c;

    nowstatus = OUT;
    while ((c = getchar()) != EOF) {
        if (c == '\t'|| c == ' ' || c == '\n') {
            if (nowstatus == IN) {
                printf("\n");
                nowstatus = OUT;
            }
        } else {
            nowstatus = IN;
            putchar(c);
        }
    }

    return 0;
}