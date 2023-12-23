#include<stdio.h>
#include<math.h>
int main(){
    int x,y;
    float r,phi;
    scanf("%d%d",&x,&y);
    r=sqrt((x*x)+(y*y));
    phi=atan(y/x);
    printf("polar cordiantes for (%d,%d) is (%.2f,%.2f)",x,y,r,phi);
}