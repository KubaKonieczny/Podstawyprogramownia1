//To jest starsza wersja
#include<stdio.h>
#include<stdlib.h>
//#include "ocena.h"
#include "ocena2.h"
//#include "ocena3.h"
//#define x_size  10
//#define y_size  10
//#define WYGRANA  2000000
//#define PRZEGRANA  -2000000

char** board(int x , int y){
    char **p=(char**)malloc(x*sizeof(char*));
    for(int n=0; n<x;++n)
        p[n]=(char*)malloc(y*sizeof(char));

    for(int n=0; n<x;++n){
        for(int k=0; k<y; ++k)
            p[n][k]=' ';
    }

    return p;
}

void freemem(char **p, int x){
    for(int n=0; n<x;++n)
        free(p[n]);

    free(p);

}

void print_board(char **p, int i , int j){
    printf("    ");

    for(int n=0; n<j; ++n){
        printf(" %c  ", n+65);
    }
    printf("\n");

	for(int n=0; n<i; ++n){
        if(i-n>=10){
            printf("%d |", i-n);
        }
        else{
            printf("%d  |", i-n);
        }

        for(int m=0; m<j; ++m){
            printf(" %c |", p[n][m]);
        }

		printf("\n");
        printf("   ");

		for(int m=0; m<j; ++m){
                printf("----");
		}

        printf("-");
		printf("\n");

	}

    printf("\n");

}

char** move(char **p){
    char x=' ', c;
    int y=0;

    printf("Twoj ruch: ");
    scanf("%c%d%c", &x, &y ,&c);

    if(y >= 1&&y <= y_size){
        if(x>=65 && x<=65+x_size && p[y_size-y][x-65]==' '){
            p[y_size-y][x-65]='o';
            printf("\n");
        }
        else if(x>=97&& x<=97+x_size&&p[y_size-y][x-97]==' '){
            p[y_size-y][x-97]='o';
            printf("\n");
        }
        else{
            printf("bledny ruch\n");
            move(p);
        }
    }
    else{
        printf("bledny ruch\n");
        move(p);
        }


    return p;
}

int move_gen(char **p, int depth, int i, int j, int *mx, int *my){
    int wmax= 4*PRZEGRANA, wmin=4*WYGRANA, move=1, wynik, nx,ny;
    if(depth%2==0&&depth>0){
        for(int x=0; x<i ; ++x){
            for(int y=0; y<j; ++y){
                if(p[x][y]==' '){
                    p[x][y]='x';
                    wynik=move_gen(p, depth-1, i, j,&nx,&ny);
                    p[x][y]=' ';
                    if(wynik>wmax){
                        wmax=wynik;
                        *mx=x;
                        *my=y;
                    }
                    move=0;
                }
            }
        }
        if(move){
           // printf("brak mozliwych ruchow");
            return 0;
        }
        else
            return wmax;
    }
    else if(depth%2==1&&depth>0){
        for(int x=0; x<i ; ++x){
            for(int y=0; y<j; ++y){
                if(p[x][y]==' '){
                    p[x][y]='o';
                    wynik=move_gen(p, depth-1, i, j,&nx,&ny);
                    p[x][y]=' ';
                    if(wynik<wmin){
                        wmin=wynik;
                        *mx=x;
                        *my=y;
                    }
                    move=0;
                }
            }
        }
        if(move){
            //printf("brak mozliwych ruchow, remis");
            return 0;
        }
        else
            return wmin;

    }
    else{
        return ocena2(p, y_size,x_size);
    }
}


int main(){
    char **p=board(y_size, x_size);
    int x,y;

    while(1){
        move_gen(p,3,y_size, x_size, &x,&y);
        p[x][y]='x';

        printf("Ruch komputra: %c%d\n\n",y+65,x_size-x);
        print_board(p, y_size, x_size);

        if(ocena2(p,y_size,x_size)<PRZEGRANA/2){
            printf("Wygrales");
            break;
        }
        if(ocena2(p,y_size,x_size)>WYGRANA/2){
            printf("Przegrales");
            break;
        }

        //printf("Ocena planszy: %d\n\n", ocena2(p,y_size,x_size));
        move(p);
        print_board(p, y_size, x_size);


        if(ocena2(p,y_size,x_size)<PRZEGRANA/2){
            printf("Wygrales");
            break;
        }
        if(ocena2(p,y_size,x_size)>WYGRANA/2){
            printf("Przegrales");
            break;
        }

    }
    freemem(p,y_size);


	return 0;
}
