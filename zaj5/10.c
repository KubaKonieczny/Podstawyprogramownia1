#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

void wypisz(int n, int j)
{

    printf("%d\n", n);
    printf("%d\n", j);

}



int main()
{

    int k=5;

    wypisz(++k, k++);

    printf("%d\n", k);
return 0;
}
