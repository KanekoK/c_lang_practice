#include <stdio.h>

/* fahr = 0,20,...,300に対して,華氏-摂氏対応表を印字する */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("摂氏\t華氏\n");
    while (celsius <= upper) {
        fahr = (9.0/5.0) * (celsius+32.0);
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}