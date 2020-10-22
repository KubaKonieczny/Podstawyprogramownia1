#include <stdio.h>

int main()
{

   const int tab1[3]={1,2,3}, tab2[3]={4,7,6};
    int tl[6];

    for(int i=0; i<6; ++i)
        {
        if(i<3)
            tl[i]=tab1[i];
        else
            tl[i]=tab2[i%3];
        }

    for(int i=0; i<6; ++i)
        printf("%d ", tl[i]);


    return 0;
}
