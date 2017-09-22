#include <stdio.h>

int main()
{
    int ns, nt, nnl;
    int c;

    ns = nt = nnl = 0;

    while((c = getchar()) != EOF) {
        if (c == ' ') {
            ++ns;
        } else if (c == '\t') {
            ++nt;
        } else if (c == '\n') {
            ++nnl;
        } else {
        }
    }
    printf("space => %d, tab => %d, newline => %d\n",ns, nt, nnl);

    return 0;
}