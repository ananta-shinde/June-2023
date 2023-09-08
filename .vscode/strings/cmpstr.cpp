#include<stdio.h>
int main(int argc, char const *argv[])
{
    char str1[40];
    char str2[40];
    int flag = 1;
    printf("Enter str1:");
    gets(str1);
    printf("Enter str2:");
    gets(str2);

   // calculate length of str1  : lenght1
     int length1 = 0;
    for(int i=0;i<40;i++)
    {
        if(str1[i] == '\0'){
            break;
        }
        else{
            length1++;
        }  
    }

    // calculate length of str2  : lenght2
     int length2 = 0;
    for(int i=0;i<40;i++)
    {
        if(str2[i] == '\0'){
            break;
        }
        else{
            length2++;
        }  
    }

    if(length1 == length2)
    {
        for(int i = 0; i< length1;i++){
            if(str1[i] != str2[i]){
                flag = 0;
            }
        }
    }
    else{
         flag = 0;
    }

    if(flag ==0)
    {
        printf("Strings are not equal");
    }
    else{
        printf("Strings are equal");
    }

    return 0;
}
