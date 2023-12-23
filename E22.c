#include<stdio.h>
int main(){
    int a,s=0,t,temp=10000,x;
    scanf("%d",&a);
    for(int i=0;i<5;i++){
        t=a%10;
        s=s+temp*t;
        a=a/10;
        temp=temp/10;

    }
    printf("%d",s);
}