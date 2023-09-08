#include<iostream>
#include<vector>
 
using namespace std;

int largestOf(int n,vector<int> A)
{
    int latrgest = 0;
    for(int j=0;j<n;j++)
    {
         if(A[j]>= latrgest){
            latrgest = A[j];
         }
    }
    cout<< latrgest;
    return latrgest/2 ;
}
int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    vector<int> A(N);
    for(int j=0;j<N;j++)
    {
        cin >> A[j];
    }
   int result =  largestOf(N,A);
   cout << result;
    return 0;
}
