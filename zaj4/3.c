#include<stdio.h>
#include<string.h>



int main()
{

    int tab[5]={1,2,3,4,5};
    for(int i=0; i< 5; ++i)
        {
            if(tab[i]>=tab[i+1])
            {
            printf("Nie");
            return 0;
            }

        }
        printf("Tak");
return 0;
}
