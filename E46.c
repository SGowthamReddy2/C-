// S Gowtham Reddy CH.en.u4cys21079
#include<stdio.h>
int main(){
    int s;
    scanf("%d",&s);
    (s<115)?printf("flywight"):(s>115&&s<=121)?printf("Bantamweight"):(s>122 && s<153)?printf("Featherweight"):(s<154 && s>189)?printf("Middleweight"):printf("Heavyweight");
}