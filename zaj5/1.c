#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main()
{
int liczba;
srand(time(NULL));
liczba = rand()%11+20;

printf("%d" , liczba);


return 0;
}
