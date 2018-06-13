//
// Created by lgf on 2018/6/13.
//
#include <stdio.h>

int main()
{
    int n2, count = 0;
    scanf("%d", &n2);
    long long n = n2;         /** int 32 bit   OverFlow...*/

    while (n > 1) {
        if (n%2 == 1)
            n = 3 * n + 1;
        else
            n /= 2;
        count ++;
    }
    printf("%d\n", count);

    return 0;
}
