#include <stdio.h>
#include <math.h>

int main()
{
    /** ex1-4  sin & cos */
    int n;                  // n < 360
    scanf("%d", &n );
    printf("%.f %.f\n",  sin(n), cos(n) );

    return 0;
}