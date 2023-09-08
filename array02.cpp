#include<stdio.h>
int main(int argc, char const *argv[])
{
    // array initialization
    //int numbers[4] = {20,40,50,55};
    int numbers[4];

    // fill an array with values

    //numbers[0] = 20;
    for(int i=0;i<4;i++){
        printf("Enter a number :");
        scanf("%d",&numbers[i]);
    }
    
     // print an array
     for(int i=0;i<4;i++){
      printf("\n%d",numbers[i]);
     }

    return 0;
}
