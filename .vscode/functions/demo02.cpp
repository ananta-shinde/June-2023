#include<stdio.h>
//return_type name_fucntion ( arguments){ body}
void printArray(int* arr,int length){
  
  for(int i=0;i<length;i++)
  {
     printf("%d",arr[i]);
  }
}
int main(int argc, char const *argv[])
{
    int nums[] = { 20,54,45,12,56};
    int temp[5] = { 21,55,45,18,58};
    int length =  sizeof(nums)/sizeof(nums[0]);
    printArray(nums,length);
    printArray(temp,5);
    

      
    return 0;
}
