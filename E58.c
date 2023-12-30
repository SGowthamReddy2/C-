//S.gowtham Reddy 21079

#include<stdio.h>
int main(){
    int n,s=0,o=0;
    printf("Enter the number for octal equivalent: ");
    scanf("%d",&n);
    while(n!=0){
        int m=n%8;
        s=(s*10)+m;
         n=n/8;
    }
    while(s!=0){
        int l=s%10;
        o=(o*10)+l;
         s=s/10;
    }
    
     printf("%d",o);
}