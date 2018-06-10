#include <stdio.h>
#include <math.h>

int main()
{
    /** ex1-7  year */
    int year;
    scanf("%d", &year );
    if ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("yes\n");
    else printf("no\n");

    return 0;
}
