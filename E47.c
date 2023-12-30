// S Gowtham Reddy CH.en.u4cys21079
#include<stdio.h>
#include<stdlib.h>
int main(){
    float r,g,b,w,c,m,y,b,rf,gr,br;
    scanf("%f%f%f",&r,&g,&b);
    rf=r/255;
    gr=g/255;
    br=b/255;
    w=max(rf,gr,br);
    c=(w-rf)/w;
    m=(w-gr)/w;
    y=(w-br)/w;
    b=1-w;
    printf("%d%d%d%d%d",w,c,m,y,b);
}