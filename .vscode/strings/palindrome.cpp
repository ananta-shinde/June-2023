#include<stdio.h>
int main(int argc, char const *argv[])
{
    char input[40];
    int flag = 0;
    printf("Enter a string :");
    gets(input);
  
    //calculate length first
    int length = 0;
    for(int i=0;i<40;i++)
    {
        if(input[i] == '\0'){
            break;
        }
        else{
            length++;
        }  
    }
     
     // compare string from start and end
    for(int i=0;i<length;i++)
    {
        if(input[i] != input[length-1-i])
        {
              flag = 1;
        }
    }

    if(flag == 0)
    {
        printf("String is palindrome");
    }
    else{
         printf("String is not palindrome");
    
    }
    return 0;
}
