#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* fahr = 0,20,...,300に対して,華氏-摂氏対応表を印字する */
int main()
{
    int fahr;

    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    return 0;
}