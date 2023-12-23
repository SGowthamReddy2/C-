#include <stdio.h>
int main(){
   float basic,dear,house;
   scanf("%f",&basic);
   dear=(basic*0.4);
   house=(basic*0.2);
   float gross=(basic-(dear+house));
   printf("%.2f",gross);

}