#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int suma(int tab[],int n)
{
    int s=0;
    for(int i=0; i<n; ++i)
    {
        s+=tab[i];
    }


return s;
}


int main()
{
int  tab[5]={13,5,3,4,6};
int n=5;
printf("%d", suma(tab,n));


return 0;
}
