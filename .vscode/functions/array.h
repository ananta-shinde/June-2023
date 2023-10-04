#include<stdio.h>
void printarray(int arr[]){ 
     //printing of an array
    for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
}
void sortArray(int arr[]){
     // sort the array
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-1-i;j++)
        {
            if(arr[j]> arr[j+1]){
                 // swapping
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1]= temp;
            }
           
        }
    }

}

int sumArray(int arr[])
{
     // sum of an aaray
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        sum= sum+arr[i];
    }
    return sum;
}