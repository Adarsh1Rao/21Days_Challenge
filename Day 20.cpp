#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
	int a=*max_element(arr,arr+n);
		int b=*min_element(arr,arr+n);
		return a+b;


}