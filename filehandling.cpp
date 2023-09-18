#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    FILE * myFirstFile1;
    FILE * myFirstFile2;
    char data[40];
    myFirstFile2 = fopen("demo2.txt","a");
    myFirstFile1 = fopen("demo.txt","r");

    if(myFirstFile1 == NULL){
        printf("File not found");
    }
    else{
          // write data to file
        //   fprintf(myFirstFile1,"hello world\n");
        //   fprintf(myFirstFile2,"hello world\n");

        // read data from file
        fscanf(myFirstFile1,"%s",data);
        printf("%s",data);
           
    }

    return 0;
}
