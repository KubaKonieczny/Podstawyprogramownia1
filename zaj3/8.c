#include <stdio.h>

int main()
{

   int zaiwestowana, zwracana, miesiace;
   float m,pr;
    scanf(" %d %d %d", &zaiwestowana, &zwracana, &miesiace );
    pr =((zwracana-zaiwestowana)*100)/zaiwestowana*1.0;
    printf("procent %.2f%%",pr);
    m=(1.0*pr)/ miesiace;
    printf("procent mies %.2f%%",m);



    return 0;
}
