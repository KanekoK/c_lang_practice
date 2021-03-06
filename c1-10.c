#include <stdio.h>

/*
各タブを\tに、各バックスペースを\bに、各バックスラッシュを\\に置き換えながら、
入力を出力に複写するプログラムを書け。
こうすれば、タブとバックスペースをはっきり目に見えるようになる。
*/

int main()
{
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
        } else if (c == '\b') {
            printf("\\b");
        } else if (c == '\\') {
            printf("\\\\");
        } else {
            putchar(c);
        }
    }

    return 0;
}