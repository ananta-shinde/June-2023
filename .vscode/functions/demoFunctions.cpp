#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[5] = {20,15,24,56,55};
    // largerst of an array
    int largest = numbers[0];
    int indexOflargest = 0;
    for(int i=0;i<5;i++)
    {
        if(numbers[i]>largest)
        {
            largest = numbers[i];
            indexOflargest = i;       
         }
    }
    printf("Largest value = %d, with index = %d",largest,indexOflargest);
    return 0;
}
