#include<stdio.h>
#include<stdlib.h>
int **odj(int** tab,int** tab2)
{
    int **roz;
    roz= malloc(2*sizeof(int*));
    for(int i=0; i<2; ++i)
         roz[i]= malloc(2*sizeof(int));

    for(int i=0; i<2; ++i)
        for(int j=0; j<2; ++j)
            roz[i][j]=tab[1][1]-tab2[1][1];
return roz;
}

int **f(int a, int b)
{
    int **wsk;
   wsk= malloc(a*sizeof(int*));
    for(int i=0; i<a; ++i)
         wsk[i]= malloc(b*sizeof(int));

    for(int i=0; i<a; ++i)
        for(int j=0; j<b; ++j)
            wsk[i][j]=1;

return wsk;
}
int **f2(int a, int b)
{
    int **wsk;
   wsk= malloc(a*sizeof(int*));
    for(int i=0; i<a; ++i)
         wsk[i]= malloc(b*sizeof(int));

    for(int i=0; i<a; ++i)
        for(int j=0; j<b; ++j)
            wsk[i][j]=2;

return wsk;
}
int main()
{
    int **tab, **tab2, **tba;
    tab=f(2,2);
    tab2=f2(2,2);
    tba=odj(tab2,tab);
     for(int i=0; i<2; ++i)
    {
        for(int j=0; j<2; ++j)
            {
            printf("%d ", tba[i][j]);
            }
        printf("\n");
    }

return 0;
}
