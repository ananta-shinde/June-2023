#include<stdio.h>
int main(int argc, char const *argv[])
{
    char name[40] = "Ananta";//['A','n','a','n','t','a','\0']
    int length = 0;
    for(int i=0;i<40;i++)
    {
        if(name[i] == '\0'){
            break;
        }
        else{
            length++;
        }  
    }
    printf("%d",length);
     

    return 0;
}
