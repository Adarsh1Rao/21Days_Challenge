#include <iostream>
using namespace std;


int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int n=arr.size();
    int sum =0; 
    int diffSum=0;
    int arr_sum=0;
    sum=n* (n-1)/2;
    for (int i = 0; i < n; i++) 
    { 
        arr_sum += arr[i];
    }
    diffSum =arr_sum-sum;
    return diffSum;


	
}





