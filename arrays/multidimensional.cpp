#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[2][5] = {10,15,14,45,45,44,12,26,80,56};

   
    for(int j=0;j<2;j++)
    {
         for(int i=0;i<5;i++)
        {
            printf("%d\t",numbers[j][i]);
        }

        printf("\n");
    }


    return 0;
}
