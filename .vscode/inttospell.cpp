#include<stdio.h>
int main(){
    // input
    int num;
    scanf("%d",&num);

    // output
    if(num == 1){
        printf("One");
    }
    if(num == 2){
        printf("Two");
    }
    if(num == 3){
        printf("Three");
    }
    if( num > 3  || num<0){
    printf("Invalid input");
    }

    
}