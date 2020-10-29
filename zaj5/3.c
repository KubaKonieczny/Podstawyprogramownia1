#include<stdio.h>
#include<time.h>
#include<stdlib.h>



int main(int argc, char* argv[])
{
    for (int k=0; k<argc;k++)
    {
        printf("%s\n", argv[k]);
    }


printf("%p", argc);

return 0;
}
