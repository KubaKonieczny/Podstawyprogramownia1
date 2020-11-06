#include<stdio.h>
#include<stdlib.h>
#include<string.h>

enum miesiac{Styczen , luty, marzec, kwiecien, maj, czerwiec};

//type def enum miesace miesiace;
void zmien(char *a)
{
    if(strcmp(a, "Styczeń")==0)
        printf("%d",Styczen);



}

int main()
{
    zmien("Styczeń");

    return 0;
}
