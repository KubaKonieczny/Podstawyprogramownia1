#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>


void razy2(int tab[], int n)
{

    for(int i=0; i<n; ++i)
        {
        tab[i]*=2;
        }
    for(int i=0; i<n; ++i)
        {
        printf("%d\n", tab[i]);
        }

}


int main()
{
    int tab[]={1,2,3,4,5,6};
    int n=6;

    razy2(tab,n);
return 0;
}
