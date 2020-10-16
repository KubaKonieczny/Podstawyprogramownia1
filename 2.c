#include <stdio.h>

int main()
{
    char s[100];
    scanf("%99s", s);

    if(s[0]=='j')
    {
        printf("Tak");
    }
    else
    {
        printf("Nie");
    }

    return 0;
}
