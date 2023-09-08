#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char name[40] = "Ananta";
    char newStr[40] = "Zebra";
    int length = strlen(name);
    printf("%d",length);
    printf("\n%d", strcmp(newStr,name));
    // copy
    //strcpy(name,newStr);
    // concat
    strcat(name,newStr);
    puts(name);
    puts(newStr);
        return 0;
}
