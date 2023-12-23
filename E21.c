#include<stdio.h>
int main(){
    int a,s=0,t;
    scanf("%d",&a);
    for(int i=0;i<5;i++){
        t=a%10;
        s=s+t;
        a=a/10;
    }
    printf("%d",s);
}