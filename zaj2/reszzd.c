#include <stdio.h>

int main()
{
    int p=6;
    printf("%d\n", p);
    {
     int  p=3;
       printf("%d\n", p);
       {
         int   p=1;
            printf("%d\n", p);
       }
       printf("%d\n", p);
    }
printf("%d\n", p);

    return 0;
}
