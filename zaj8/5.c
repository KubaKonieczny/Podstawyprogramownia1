#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct wybory
{

    char * nazwisko;
    int glosy;
};


void sortWynikWyb(struct wybory *tab, int n)
{
    int t;
    for(int i=0;i<n;++i)
        for(int j=0;j<n-i-1;++j)
        {
            if(tab[j].glosy>tab[j+1].glosy)
                {
                    t=tab[j].glosy;
                    tab[j].glosy=tab[j+1].glosy;
                    tab[j+1].glosy=t;

                }

        }
    for(int i=0; i<n; ++i)
        {
            printf("%d %s \n", tab[i].glosy, tab[i].nazwisko);

        }

}


int main()
{

    struct wybory tab[3];

    tab[0].glosy=10;
    tab[0].nazwisko="aa";

    tab[1].glosy=12;
    tab[1].nazwisko="bb";

    tab[2].glosy=5;
    tab[2].nazwisko="cc";

sortWynikWyb(tab,3);

return 0;
}
