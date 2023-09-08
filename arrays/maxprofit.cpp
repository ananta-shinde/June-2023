#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int findMaxSumSubsequence(vector<int> const &nums, int i, int n, int prev)
{
    // base case: all elements are processed
    if (i == n) {
        return 0;
    }
 
    // recur by excluding the current element
    int excl = findMaxSumSubsequence(nums, i + 1, n, prev);
 
    int incl = 0;
 
    // include current element only if it's not adjacent to
    // the previous element
    if (prev + 1 != i) {
        incl = findMaxSumSubsequence(nums, i + 1, n, i) + nums[i];
    }
 
    // return maximum sum we get by including or excluding
    // current item
    return max(incl, excl);
}
int MAX_PROFIT(int N,vector<int> A,int M,vector<int> B)
{
   int min_value = 0;
   int max_value = 0;
   vector<int> K(N + M);
    std::vector<int> v(A);
    v.insert(v.end(), B.begin(), B.end());
     
  sort(v.begin(),v.end());
    int j = (M+N) - 1;
    for(int i = 0; i < (M+N) - 1; i++)
    {
        max_value += v[j];
        j -= 1;
    }
     
     cout << max_value;     

}


int main(int argc, char const *argv[])
{
    int N;
    cin>> N;
    vector<int> A(N);
    for(int j=0;j<N;j++)
    {
        cin >> A[j];
    }

    int M;
    cin>> M;
    vector<int> B(M);
     for(int j=0;j<M;j++)
    {

        cin >> B[j];
    }

     
    
    MAX_PROFIT(N,A,M,B);
    
    return 0;
}
