#include <stdio.h>

/*
単語カウント・プログラムのテストは、どのようにするか？
もしバグがあるとしたら、それをあばきだすにはどんな入力をするのがよいか？
*/
#define IN  1
#define OUT 0


int main()
{
    int wordcounter, newstatus;
    int c;

    newstatus = OUT;
    wordcounter = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t' || c == ' ' || c == '\n') {
            newstatus = OUT;
        } else if (newstatus == OUT) {
            newstatus = IN;
            ++wordcounter;
        }
    }
    printf("%d\n", wordcounter);

    return 0;
}