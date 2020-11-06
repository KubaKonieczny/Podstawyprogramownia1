#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int liczba(char a[])
{
    int z=0;
    for(int i=0; i<strlen(a); ++i)
    {
        if(islower(a[i]))
            z++;


    }

    return z;
}



int main()
{

printf("%d", liczba("aaaAABa"));


    return 0;
}
