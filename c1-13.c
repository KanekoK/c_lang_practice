#include <stdio.h>

/*
入力した単語の長さをヒストグラム（度数分布図）にしてプリントするプログラムを書け。
ヒストグラムは横に書くほうが簡単だが、縦書きに挑戦してみるのもよい。
*/

#define IN  0
#define OUT 1
int main(){
    int wordsize[10];
    int c;
    int i,j,k,l;
    int wordstatus;
    wordstatus = OUT;
    i = 0;
    // 初期化
    for(j = 0; j < 10; j++){
        wordsize[j] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (wordstatus == IN) {
                if(i <= 9) {
                    wordsize[i] += 1;
                } else {
                    wordsize[9] += 1;
                }
                wordstatus = OUT;
                i = 0;
            }
        } else {
            wordstatus = IN;
            i += 1;
        }
    }
    for (k = 0; k < 10; k++) {
        l = 0;
        if (wordsize[k] != 0) {
            printf("%2d:%d",k ,wordsize[k]);
            while ( l < wordsize[k]) {
                printf("*");
                l += 1;
            }
            printf("\n");
        }
    }
}