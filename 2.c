#include <stdio.h>
int main(void)
{
 int a, i, j, k, count;
 scanf("%d", &a);
 k = 0;
 if (a>1)
   {count = 1;
    printf("2\n");
    for (i=2;i<=a;i++)
        {
         for (j=2;j<i;j++)
             {
              k = i % j;
              if (k==0)
                 {
                  break;
                 }
             } 
         if (k!=0)
            {
             count++;
             printf("%d\n",i);
            }
        }
   }
 else
   {
    count=0;
   }
 printf("total==%d", count);
 return 0;
}











 
