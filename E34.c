#include<stdio.h>
int main(){
    int d;
    scanf("%d",&d);
    int t;
    t=(d-1)%7;
    if((d-1)%4==0){
        t=t+1;
    }
    switch(t) {
        case 1: 
        printf("tuesday");
        break;
        case 2: 
        printf("wed");
        break;
        case 3: 
        printf("thur");
        break;
        case 4: 
        printf("fri");
        break;
        case 5: 
        printf("sat");
        break;
        case 6: 
        printf("sun");
        break;
        case 0: 
        printf("mon");
        break;
    }
    
}