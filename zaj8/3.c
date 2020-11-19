#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int ocena(char p[3][3])
{
    if(p[0][0]=='x'&&p[0][1]=='x'&&p[0][2]=='x') return 1;
    if(p[1][0]=='x'&&p[1][1]=='x'&&p[1][2]=='x') return 1;
    if(p[2][0]=='x'&&p[2][1]=='x'&&p[2][2]=='x') return 1;

    if(p[0][0]=='x'&&p[0][1]=='x'&&p[0][2]=='x') return 1;
    if(p[0][1]=='x'&&p[1][1]=='x'&&p[2][1]=='x') return 1;
    if(p[0][2]=='x'&&p[1][2]=='x'&&p[2][2]=='x') return 1;

    if(p[0][0]=='x'&&p[1][1]=='x'&&p[2][2]=='x') return 1;
    if(p[0][2]=='x'&&p[1][1]=='x'&&p[2][0]=='x') return 1;

    if(p[0][0]=='o'&&p[0][1]=='o'&&p[0][2]=='o') return 1;
    if(p[1][0]=='o'&&p[1][1]=='o'&&p[1][2]=='o') return 1;
    if(p[2][0]=='o'&&p[2][1]=='o'&&p[2][2]=='o') return 1;

    if(p[0][0]=='o'&&p[0][1]=='o'&&p[0][2]=='o') return 1;
    if(p[0][1]=='o'&&p[1][1]=='o'&&p[2][1]=='o') return 1;
    if(p[0][2]=='o'&&p[1][2]=='o'&&p[2][2]=='o') return 1;

    if(p[0][0]=='o'&&p[1][1]=='o'&&p[2][2]=='o') return 1;
    if(p[0][2]=='o'&&p[1][1]=='o'&&p[2][0]=='o') return 1;

}
int main()
{
        char tab[3][3]={};
        int y,x;

    while(ocena(tab)!=1)
    {
        int k;

            {
                if(k%2==0)
                    {
                        scanf("%d %d", &x ,&y );
                        tab[x][y]='o';
                    }
                if(k%2==1)
                    {
                        scanf("%d %d", &x ,&y );
                        tab[x][y]='x';
                        }


            }
    for(int i=0; i<3;++i)
    {
        for(int j=0; j<3;++j)
            printf("%c ", tab[i][j]);

        printf("\n");
       }

    ++k;
    }

     if(ocena(tab)==1)
        printf("wygrana");
return 0;
}
