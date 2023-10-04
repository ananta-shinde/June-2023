#include<stdio.h>
#include"array.h"

int main(int argc, char const *argv[])
{
    int a[5] = {40,45,12,45,78};
    int num[] = {42,45,56,55,12,60};
    printarray(a);
    printf("\n------------------------\n");
    sortArray(a);
    printf("\n------------------------\n");
     printarray(a);
    printf("\n%d",sumArray(a));

    return 0;
}
