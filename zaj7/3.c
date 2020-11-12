#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *odj(char *napis,int n)
{
    char *s= malloc(n*sizeof(char));



    for(int i=0, k=0; napis[i]!='\0'; ++i)
        if(napis[i]!=' ')
        {
            s[k]+=napis[i];
            ++k;
        }

return s;
}


int main()
{

    char s[100]="a a a a a ";
    int n=strlen(s);
    printf("%s" , odj(s,n));


return 0;
}
