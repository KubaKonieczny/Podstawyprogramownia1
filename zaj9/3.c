#include<stdio.h>
#include<stdlib.h>
#include<string.h>




int main()
{
    FILE *fp, *fp2, *fp3;
    char c[100];
    int i=0;
    fp=fopen("tekst.txt" , "r");
    fp2=fopen("plik1.txt" , "w");
    fp3=fopen("plik2.txt" , "w");


    while (fgets(c,100,fp))
    {
        if(i%2==1)
        fprintf(fp2,"%s",c);
        else
        fprintf(fp3,"%s",c );
        ++i;
    }


return 0;
}
