#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char *argv[])
{

char h[100];

for(int i=1; i<argc; ++i)
    if(strcmp(argv[i], "--help"))
        printf("sadsd");

return 0;
}
