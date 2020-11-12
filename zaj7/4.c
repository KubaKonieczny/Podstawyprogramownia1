#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void nawias1(char napis[100])
{
    printf("(%s)\n",napis);
}

void nawias2(char napis[100])
{
    printf("[%s]\n",napis);
}
void nawias3(char napis[100])
{
    printf("{%s}\n",napis);
}

int main()
{
    char napis[100]="aaaa";
    void(*do1)(char[100]);
    do1=nawias1;
    do1(napis);

    do1=nawias2;
    do1(napis);

    do1=nawias2;
    do1(napis);



return 0;
}
