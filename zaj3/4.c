#include <stdio.h>

int main()
{
    char s[4][20];

    scanf("%19s %19s %19s %19s", s[0], s[1], s[2] ,s[3]);
    printf("%s,%s,%s,%s", s[0], s[1], s[2], s[3]);

    return 0;
}
