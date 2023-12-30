// S Gowtham Reddy CH.en.u4cys21079
#include<stdio.h>
int main(){
    int t1,t2,t3;
    scanf("%d%d%d",&t1,&t2,&t3);
    ((t1==t2)&&(t2==t3))?printf("equal"):((t1==t2)||(t2==t3))?printf("isosceles"):printf("scalen");
}