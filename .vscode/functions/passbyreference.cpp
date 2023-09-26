#include<stdio.h>
void  swapNumbers(int* a,int* b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main(int argc, char const *argv[])
{
    int a = 20, b= 30;
    // swap
    
    swapNumbers(&a,&b);
    printf("A=%d, B=%d",a,b);
    return 0;
}
