#include<stdio.h>
int main(){
    float l;
    float b;
    float r;
    scanf("%f",&l);
    scanf("%f",&b);
    scanf("%f",&r);
    printf("area of rec = %f\n",l*b);
    printf("peri of rec = %f\n",(2*(l+b)));
    printf("area of cir = %f\n",(3.14*(r*r)));
    printf("circum of cir = %f\n",(2*(3.14*r)));
}