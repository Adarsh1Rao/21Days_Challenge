
#include <iostream>

using namespace std;

void printPattern(int n) { // Write your code here. 

for(int i=1;i<=n;i++)

{ 
	for (int j=0;j<n-i;j++) 
	{
		 cout<<" ";
	}

    for(int j=0;j<2*i-1; j++)
	{
		cout<<"*";

    }
	cout<<endl;
}

}
