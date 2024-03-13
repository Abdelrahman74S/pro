#include <stdio.h>

int main() {
    int N, i;
   
    int e,o,p,g;
    e=o=p=g=0;
    scanf("%d", &N);
    
    for (i = 1; i <= N; i++) 
    {
       int num;
      scanf("%d\n",&num);
      if (num % 2 == 0)
      {
            e++;
      }
      if (num % 2 != 0)
      {
            o++;
      }
      if(num > 0)
      {
            p++;
      }
      if(num < 0)
      {
            g++;
      }

    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",e,o,p,g);
    return 0;
}