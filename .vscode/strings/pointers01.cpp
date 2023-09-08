#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num = 30;
    int* ptr = &num;
    int* ptr2 = ptr;
    printf("%d\n",num);
    printf("%d\n",&num);
    printf("%d\n",ptr);
    //printf("%d\n",*ptr);
    *ptr2 = 40;
    printf("%d\n",num);
    return 0;
}
