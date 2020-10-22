#include<stdio.h>


int main()
{

    for( int i=1; i<100; ++i)
    {
        if(i%6==0)
        printf("%d\n", i);
    }
    int s=0;
    for( int i=30; i<100; ++i)
    {
        s+=i;

    }
    printf("%d\n", s);

return 0;
}
