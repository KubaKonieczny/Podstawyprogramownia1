#include<stdio.h>
#include<stdlib.h>
#include<string.h>




int main()
{
    FILE*fp;
    int l, s;
    const int t=10;
    fp=fopen("numery.txt" , "r");

    for(int i=0; i<10; ++i)
    {

        fscanf(fp, "%d", &l);
        s+=l;

    }

        printf("%d", s/t);
        fclose(fp);

return 0;
}
