#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num[5]={20,55,45,56,20};
    printf("%d\n",num);
    printf("%d\n",*(num+0));// num[0]
    printf("%d",*(num+1));// num[1]
    return 0;
}
