#include<stdio.h>
int main()
{
    int count = 0;
    int num = 124545;
    for(num;num >0;num = num/10){
          count++;
          printf("%d",num%10);
    }

    printf("%d",count);
    printf("%d",num1);

    return 0;

}