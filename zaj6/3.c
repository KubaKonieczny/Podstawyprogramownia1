#include<stdio.h>
#include<stdlib.h>
#include<string.h>




int main()
{
struct  S1
{
 bool b;
double d;
     char c;
     int i;
     }​​​​;

     struct S2

     {​​​​
        double d;
          int i;
            bool b;
         char c;

         }​​​​;


printf("%d %d", sizeof(struct S1), sizeof(struct S1),);

    return 0;
}
