#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void przy(char a[], int n)
{
    if(n>=strlen(a))
        printf("%s",a);
    else
        for(int i=0; i<n; ++i)
        {
            printf("%c",a[i]);
        }


}



int main()
{
przy("aaaAABa", 2);


    return 0;
}
