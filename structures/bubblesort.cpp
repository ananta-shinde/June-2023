#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num[5] = { 1,15,56,42 ,13};
  // sorting logic
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-1-i;j++)
        {
            if(num[j]< num[j+1]){
                 // swapping
            int temp = num[j];
            num[j] = num[j+1];
            num[j+1]= temp;
            }
           
        }
    }

    for(int i=0;i<5;i++)
    {
        printf("%d\t",num[i]);
    }


    return 0;
}
