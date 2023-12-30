//S.gowtham Reddy 21079
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n=21;
    int a,b;
    while(n>0){
       printf("No of remaining matchsticks: %d\n",n);
       printf("Select a match stick from 1 to 4 :");
       scanf("%d",&a);
       if(a<1 || a>4 || a>n){
        printf("Inavlid number picked");
         continue;
       }n=n-a;
       if(n<=1){
        printf("You won");
        break;
       }
       if(n<4){
        b=n;
       }else{
        b=5-a;
       }
       n=n-b;
       if(n<=1){
        printf("computer  won");
        break;}}
}