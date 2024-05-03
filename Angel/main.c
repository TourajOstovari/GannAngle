#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("Hello it's gann angel developed by Mr. Touraj Ostovari 2024 >>  mostly used for square Time - Price!\n");
    while(1)
    {
        int N = 0; // shomare radif
        int y = 0; // Level or Time Candle number
        printf("\nShomare Radif adad dar Sqauare 9 Gann??\t");
        scanf("%i",&N);
        printf("\nEnter Price level or Time Candle Bar Number??\t");
        scanf("%i",&y);
        float M = (((N * 4) - 3) * N) + 1;
        float Angel = ( y - M ) * (45 / N);
        printf("M= %f  --  Angel Degree= %f",M,Angel);

    }
    return 0;
}
