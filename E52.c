//S.gowtham Reddy 21079
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int sum=1;
    while(a!=0){
        sum=sum*a;
        a--;
    }
    printf("%d",sum);
}