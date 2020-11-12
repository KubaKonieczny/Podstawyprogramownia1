#include<stdio.h>
#include<stdlib.h>
double **f(int a, int b)
{
    double **wsk;
   wsk= malloc(a*sizeof(double*));
    for(int i=0; i<a; ++i)
         wsk[i]= malloc(b*sizeof(double));

    for(int i=0; i<a; ++i)
        for(int j=0; j<b; ++j)
            wsk[i][j]=0;

return wsk;
}
void zwolnij(int **tab, int a)
{
    for(int i=0; i<a; ++i)
        free(tab[i]);
free(tab);
}

int main()
{
int a, b;
double **tab;
    scanf("%d %d", &a, &b);
    tab=f(a,b);

    for(int i=0; i<a;++i)
    {
        for(int j=0; j<b; ++j)
            {
            printf("%.0f ", tab[i][j]);
            }
        printf("\n");
    }

    zwolnij(tab,a);

return 0;
}
