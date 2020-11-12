#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int *push_back(int *tab,int n)
{
    int *t=malloc((n+1)*sizeof(int));

        for(int i=0;i<n;++i)
            t[i]=tab[i];

    t[n]=9;

    return t;
}

int main()
{
    int n=5;
    int tab[5]={1,2,3,4,5};
    int *t;
    t=push_back(tab, n);

        for(int j=0; j<n+1; ++j)
            {
            printf("%d ", t[j]);
            }

return 0;
}
