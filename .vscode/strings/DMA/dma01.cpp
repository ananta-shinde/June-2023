#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    //int numbers[20]; // static memory allocation
    int* numbers;
     numbers = (int *) malloc(20);

    printf("%u\n",numbers);
    printf("%u\n",numbers+1);
    printf("%u",sizeof(numbers));
    return 0;
}
