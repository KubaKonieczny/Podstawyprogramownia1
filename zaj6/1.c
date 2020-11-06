#include<stdio.h>
#include<stdlib.h>

int *fun(int a)
{
    int *tab=malloc(sizeof(int)*a);
    for(int i=0;i<a;++i)
    {
        tab[i]=0;
        printf("%d ", tab[i]);
    }

    return tab;
}


int main()
{
    int n=0, *t;
    scanf("%d", &n);

    t=fun(n);
    free(t);

return 0;
}
