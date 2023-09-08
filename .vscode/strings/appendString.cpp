#include<stdio.h>
int main(int argc, char const *argv[])
{
    char name[40]= "Ananta";
    char last_name[40] = "Shinde";
    int length = 0;
    // lenght of name
    for(int i=0;i<40;i++)
    {
        if(name[i] == '\0'){
            break;
        }
        else{
            length++;
        }  
    }

    for(int i=length;i<40;i++)
    {
        if(last_name[i-6] == '\0')
        {
            break;
        }
        name[i] = last_name[i-6];
    }
    puts(name);
    return 0;
}
