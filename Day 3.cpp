#include<iostream>
using namespace std;

int main() {
	// Write your code here

	int n;
	int sum_even=0,sum_odd=0;
	int digit=0;

	cin>>n;

	while(n!=0)
	{
		
		digit=n%10;
		if(digit%2==0)
		{
			sum_even=sum_even+digit;
		}
		else
		{
			sum_odd=sum_odd+digit;
		}
		n=n/10;
	}

	cout << sum_even<< " " << sum_odd;

	return  0;
	
}
