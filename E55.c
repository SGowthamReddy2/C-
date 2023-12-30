//S.gowtham Reddy 21079
#include<stdio.h>
#include<math.h>
int main(){
    int a,t,z;
    scanf("%d",&a);
    z=a;
    int ans=0;
    while(a!=0){
        t=a%10;
        ans=ans+pow(t,3);
        a=a/10;
    }
    printf("%d",ans);
    (ans==z)?printf("amstr"):printf("nope");
}