#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>


float average(int tab[], int n)
{
    float s=0;
    float sr;
    for(int i=0; i<n; ++i)
        {
        s+=tab[i];
        }

    s*=1.0;
    sr= s/n;

    return sr;
}


int main()
{
    int tab[]={1,2,3,4,5,6};
    int n=6;
printf("%.2f",average(tab, n) );

return 0;
}
