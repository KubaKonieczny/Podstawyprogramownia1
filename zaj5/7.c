#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>


float mediana(int tab[], int n)
{
        int c;
        float m;
        for(int i=0; i<n; ++i)
        {
            for(int j=0; j<n-1; ++j)
                {
                    if(tab[j]>tab[j+1])
                        {
                            c=tab[j+1];
                            tab[j+1]=tab[j];
                            tab[j]=c;

                        }
                }
        }

        if(n%2==0)
            m= (tab[n/2]+tab[(n/2)-1])/2.0;
        else
            m=tab[(n/2)-1];

    return m;


}


int main()
{
    int tab[]={1,2,3,4,5,6};
    int n=6;

    printf("%.2f", mediana(tab, n));

return 0;
}
