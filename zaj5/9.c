#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

void wypisz(char s[100])
{
static int k=1;

printf("%d %s\n", k, s);
++k;

}



int main()
{

    char s[100]="asdsad";

    for(int i=0; i<10; i++)
        wypisz(s);

return 0;
}
