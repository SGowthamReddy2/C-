#include<stdio.h>
int main(){
    float sp,cp;
    scanf("%f%f",&sp,&cp);
    float p,l,t;

    t=sp-cp;

    if(t>0){
        printf("%f profit",sp-cp);
    }
    else{
        printf("%f loss",sp-cp);
    }
}