#include<stdio.h>
#include<stdlib.h>
#include<string.h>




int main()
{
    FILE *fp, *fp2;
    char c;

    fp=fopen("tekst.txt" , "r");
    fp2=fopen("kopia2.txt" , "w");

    c = fgetc(fp);
    while (c != EOF)
    {
        fputc(c, fp2);
        c = fgetc(fp);
    }


return 0;
}
