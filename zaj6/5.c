#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char *dnam(char a[])
{
    for(int i=0; i<strlen(a); ++i)
    {
        if(isupper(a[i]))
            {
            a[i]=tolower(a[i]);

            }

    }
     printf("%s", a);
    return a;
}



int main()
{

printf("%s", dnam("AABa"));


    return 0;
}
