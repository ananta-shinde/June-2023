#include<stdio.h>
int main( )
{
    int j;
    int num;
    for(int j=1;j<=5;j++)
     {
        printf("Enter a number");
        scanf("%d",&num);  
         int result = 1;
       if(num%2 == 0){
            for(int i = 0;i<num;i++)
            {
                result = result * (num -i);   
            }
            printf("%d\n",result);
        } 

    }
    return 0;
}
