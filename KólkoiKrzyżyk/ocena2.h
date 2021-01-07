#include<stdio.h>
#include<stdlib.h>

#define x_size  10
#define y_size  10
#define WYGRANA  2000000
#define PRZEGRANA  -2000000

const int x5=WYGRANA, x4=4000,x3=300,x2=20, x1=0;
const int o5=-PRZEGRANA, o4=4000,o3=300,o2=20, o1=0;

int pointsx(int l){
    ++l;
    switch(l){
        case 1:
            return x1;
            break;
        case 2:
            return x2;
            break;
        case 3:
            return x3;
            break;
        case 4:
            return x4;
            break;
        case 5:
            return x5;
            break;
        default:
            return x1;
            break;
    }

}

int pointso(int l){
    ++l;
    switch(l){
        case 1:
            return o1;
            break;
        case 2:
            return o2;
            break;
        case 3:
            return o3;
            break;
        case 4:
            return o4;
            break;
        case 5:
            return o5;
            break;
        default:
            return o1;
            break;
    }

}


int ocena2(char **p, int i , int j ){
    int wx=0,wo=0,wx0=0,wo0=0,wx1=0,wo1=0,wx2=0,wo2=0, wx3=0,wx4=0, wo3=0,wo4=0, c=0;
    //poziom
    /*
    for(int y=0; y<j; ++y){
    for(int x=0; x<i; ++x){
            if(p[y][x]=='x'){
               if(x+1<y_size&&p[y][x+1]=='x')
                ++wx;
                else{
                    if(wx==4)
                        return WYGRANA;
                    c+=pointsx(wx);
                    wx=0;
                }
            }
            else if(p[y][x]=='o'){
                if(x+1<y_size&&p[y][x+1]=='o'){
                    ++wo;
                }
                else{
                     if(wo==4)
                        return PRZEGRANA;
                    c-=pointso(wo);
                    wo=0;
                }
            }
        }
        wx=0;
        wo=0;
    }
*/
 //pion
   /* for(int y=0; y<j; ++y){
        for(int x=0; x<i; ++x){
            if(p[x][y]=='x'){
               if(x+1<x_size&&p[x+1][y]=='x')
                ++wx0;
                else{
                    if(wx0==4)
                        return WYGRANA;
                    c+=pointsx(wx0);
                    wx0=0;
                }
            }
            else if(p[x][y]=='o'){
                if(x+1<x_size&&p[x+1][y]=='o'){
                    ++wo0;
                }
                else{
                     if(wo0==4)
                        return PRZEGRANA;
                    c-=pointso(wo0);
                    wo0=0;
                }
            }
        }
        wx0=0;
        wo0=0;
    }*/

    for(int y=0; y<j; ++y){
        for(int x=0; x<i; ++x){
            //poziom
            if(p[y][x]=='x'){
                if(x+1<y_size&&p[y][x+1]=='x'){
                    ++wx;
                }
                else{
                   // if(wx==4)
                    //    return WYGRANA;
                    c+=pointsx(wx);
                    wx=0;
                }
            }
            else if(p[y][x]=='o'){
                if(x+1<y_size&&p[y][x+1]=='o'){
                    ++wo;
                }
                else{
                    // if(wo==4)
                      //  return PRZEGRANA;
                    c-=pointso(wo);
                    wo=0;
                }
            }


            //pion
            if(p[x][y]=='x'){
               if(x+1<x_size&&p[x+1][y]=='x'){
                ++wx0;
               }
                else{
                  //  if(wx0==4)
                     //   return WYGRANA;
                    c+=pointsx(wx0);
                    wx0=0;
                }
            }
            else if(p[x][y]=='o'){
                if(x+1<x_size&&p[x+1][y]=='o'){
                    ++wo0;
                }
                else{
                   //  if(wo0==4)
                     //   return PRZEGRANA;
                    c-=pointso(wo0);
                    wo0=0;
                }
            }


            //skos1
            if(x+y<y_size&&p[x][x+y]=='x'){
               if(x+y+1<y_size&&x+1<y_size&&p[x+1][x+y+1]=='x'){
                ++wx1;
               }
                else{
                   // if(wx1==4)
                    //    return WYGRANA;
                    c+=pointsx(wx1);
                    wx1=0;
                }

            }
            else if(x+y<y_size&&p[x][x+y]=='o'){
                if(x+y+1<y_size&&x+1<y_size&&p[x+1][x+y+1]=='o'){
                    ++wo1;
                }
                else{
                  //   if(wo1==4)
                      //  return PRZEGRANA;
                    c-=pointso(wo1);
                    wo1=0;
                }
            }

            if(x+y+1<x_size&&p[x+y+1][x]=='x'){
               if(x+y+2<x_size&&x+1<x_size&&p[x+y+2][x+1]=='x'){
                ++wx2;
               }
                else{
                   // if(wx2==4)
                    //    return WYGRANA;
                    c+=pointsx(wx2);
                    wx2=0;
                }

            }
            else if(x+y+1<x_size&&p[x+y+1][x]=='o'){
                if(x+y+2<x_size&&x+1<x_size&&p[x+y+2][x+1]=='o'){
                    ++wo2;
                }
                else{
                   //  if(wo2==4)
                    //    return PRZEGRANA;
                    c-=pointso(wo2);
                    wo2=0;
                }
            }


            //2skos
            if(y_size-x-y-1>=0&&p[x][y_size-y-x-1]=='x'){
               if(x+1<x_size&&y_size-x-y-2>=0&&x+1<y_size&&p[x+1][y_size-y-x-2]=='x'){
                ++wx3;
               }
                else{
                  //  if(wx3==4)
                   //     return WYGRANA;
                    c+=pointsx(wx3);
                    wx3=0;
                }

            }
            else if(y_size-x-y-1>=0&&p[x][y_size-y-x-1]=='o'){
                if(x+1<x_size&&y_size-x-y-2>=0&&x+1<y_size&&p[x+1][y_size-y-x-2]=='o'){
                    ++wo3;
                }
                else{
                  //   if(wo3==4)
                    //    return PRZEGRANA;
                    c-=pointso(wo3);
                    wo3=0;
                }
            }

             if(x+y+1<x_size&&y_size-x-1>=0&&p[x+y+1][y_size-x-1]=='x'){
               if(x+y+2<x_size&&y_size-x-2>=0&&p[x+y+2][y_size-x-2]=='x'){
                ++wx4;
               }
                else{
                    //if(wx4==4)
                      //  return WYGRANA;
                    c+=pointsx(wx4);
                    wx4=0;
                }

            }
            else if(x+y+1<x_size&&y_size-x-1>=0&&p[x+y+1][y_size-x-1]=='o'){
                if(x+y+2<x_size&&y_size-x-2>=0&&p[x+y+2][y_size-x-2]=='o'){
                    ++wo4;
                }
                else{
                  //   if(wo4==4)
                    //    return PRZEGRANA;
                    c-=pointso(wo4);
                    wo4=0;
                }
            }

            if(x>=4&&y>=4&&x+y<=10&p[x][y]=='x')
                ++c;
            if(x>=4&&y>=4&&x+y<=10&p[x][y]=='o')
                --c;

        }
        wx=0;
        wo=0;
        wx0=0;
        wo0=0;
        wx1=0;
        wo1=0;
        wx2=0;
        wo2=0;
        wx3=0;
        wo3=0;
        wx4=0;
        wo4=0;
    }

    return c;
}
