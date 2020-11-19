#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int *sort(int *tab, int n)
{
    int t;
    for(int i=0;i<n;++i)
        for(int j=0;j<n-i-1;++j)
        {
            if(tab[j]>tab[j+1])
                {
                    t=tab[j];
                    tab[j]=tab[j+1];
                    tab[j+1]=t;

                }

        }



    return *tab;
}
int main()
{
    int tab[5]={4,6,7,1,3};
    sort(tab,5);
    for(int i=0; i<5;++i)
        printf("%d ", tab[i]);


return 0;
}
