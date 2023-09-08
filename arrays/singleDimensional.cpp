#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[5];
    // input to array  
    for(int i = 0;i<5;i++)
    { 
        printf("enter a number");
        scanf("%d",&numbers[i]);
    }
    // print an array
    for(int i = 0;i<5;i++)
    {
        printf("%d\n",numbers[i]);
    }

    
     
    


    return 0;
}
