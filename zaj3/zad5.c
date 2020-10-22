#include <stdio.h>

int main()
{
    char o;

    printf("pytanie\n");
    printf("A. odp1    B. odp2\n");
    printf("C. odp3    D. odp4\n");

    scanf("%c", &o);
    if(o=='A'||o=='a')
    {
    printf("poprawna odpowiedz następne pytnie ");

    }
    return 0;
}
