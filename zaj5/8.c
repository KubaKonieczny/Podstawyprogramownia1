#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>


int main()
{
int liczba;

srand(time(NULL));

liczba = rand()%5+1;

char ob1[100]="Kiełbasa, browary i inne towary";
char ob2[100]="Opiekę lekarską i rentę wysoką";
char ob3[100]="Kokosy, banany, narodzie kochany";
char ob4[100]="A zamiast pracy taniec i śpiew";
char ob5[100]="Ja obiecuję wam, ja obiecuję wam, tralalala";


switch (liczba)
{

    case 1:
        printf("%s", ob1);
        break;
    case 2:
        printf("%s", ob2);
        break;
    case 3:
        printf("%s", ob3);
        break;
    case 4:
        printf("%s", ob4);
        break;
    case 5:
        printf("%s", ob5);
        break;

}


return 0;
}
