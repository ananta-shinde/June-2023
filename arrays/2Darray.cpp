#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[2][3] = { 20,45,13,45,56,78};

    for(int j =0;j<2;j++)
    {
         for(int i= 0;i<3;i++)
        {
             printf("%d",numbers[j][i]); 
        }
    }
   

    // numbers[0][0];
    // numbers[0][1];
    // numbers[0][2];
    // numbers[1][0];
    // numbers[1][1];
    // numbers[1][2];
    return 0;
}
