#include <stdio.h>

int main()
{
    int c;
    int ile;
    const float milnakm=1.60;
    const float kmnamil=0.62;
    scanf("%d", &c);
    scanf("%d", &ile);

    if(c==1)
    {
        printf("%.2f", ile*kmnamil);
    }

    if(c==2)
    {
        printf("%.2f", ile*milnakm);
    }

    return 0;
}
