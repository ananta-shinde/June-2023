#include<stdio.h>
void sumOfNnumbers(int start =0,int end =5) {
    int sum = 0;
    for(int i=start;i<=end;i++){
        sum = sum + i; 
    }
    printf("sum = %d", sum);
}
int main(int argc, char const *argv[])
{
    
    sumOfNnumbers();
    sumOfNnumbers(20,25);
    
     

    return 0;
}
