#include<stdio.h>
int main(){
    int s1,s2,s3,s4,s5,tt;
    float per;
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    printf("total = %d\n",s1+s2+s3+s4+s5);
    per=((s1+s2+s3+s4+s5)/500)*100;
    printf("total = %.2f\n ",per);
}