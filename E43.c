    // S Gowtham Reddy CH.en.u4cys21079
    #include<stdio.h>
    int main(){
        float c,h,t;
        scanf("%f%f%f",&h,&c,&t);
        ((h==50&&c==0.7&&t==5600)?printf("grade 1"):(h==50&&c==0.7&&t!=5600)?printf("grade 2"):(h!=50&&c==0.7&&t==5600)?printf("grade 3"):(h==50&&c!=0.7&&t==5600)?printf("garde 7"):(h==50||c==0.7||t==5600)?printf("grade 6"):printf("grade 7"));
    }