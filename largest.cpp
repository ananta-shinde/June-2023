#include<stdio.h>
int main()
{
    int n1=40,n2=88,n3=15;

    if(n3>n1 && n3>n2){
       printf("largest no is : %d",n3);
    }
    if(n2>n1 && n2>n3){
        printf("largest no is : %d",n2);
    }
    if(n1>n3 && n1>n2){
      printf("largest no is : %d",n1);
    } 
    return 0;
}