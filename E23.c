#include<stdio.h>
#include<math.h>
int main(){
    int l,b,h;
    scanf("%d%d%d",&l,&b,&h);
    int s=(l+b+h)/2;
    float area=sqrt(s*(s-l)*(s-b)*(s-h));
    printf("area = %f",area);
}