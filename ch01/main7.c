#include <stdio.h>
#include <math.h>

int main()
{
    /** ex1-5  discount */
    float n;
    scanf("%f", &n );
    float price;
    price = 95 * n;
    if (price >= 300)
        printf("%.3f\n", price * 0.85);
    else
        printf("%.3f\n", price);

    return 0;
}