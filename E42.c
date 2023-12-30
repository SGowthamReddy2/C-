// S Gowtham Reddy CH.en.u4cys21079
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    int t;
    t=ch;
    if(t>=65 && t<=90) printf("capital");
    else if(t>=97 && t<=122) printf("small");
    else if(t>=48 && t<=57) printf("num");
    else if((t>=65 && t<=90)||(t>=58 && t<=64)||(t>=91 && t<=96)||(t>=123 && t<=127)) printf("spec");
}