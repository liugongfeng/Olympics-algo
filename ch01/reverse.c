#include <stdio.h>
int main()
{
    // 127 -> 721      025 -> 520
//    int n;
//    scanf("%d", &n);
//    printf("%d%d%d\n", n%10, n/10%10, n/100);
//    return 0;

      int n, m;
      scanf("%d", &n);
      m = (n%10)*100 + (n/10%10)*10 + (n/100) ;
      printf("%03d\n", m);
      return 0;

}