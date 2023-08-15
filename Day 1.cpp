#include <iostream>
using namespace std;


int dataTypes(string type) {
	// Write your code here
	
	

	int output_size=0;
	
	if(type=="Long")
	output_size=sizeof(long);
	else if(type=="Float")
	output_size=sizeof(float);
	else if(type=="Double")
	output_size=sizeof(double);
	else if(type=="Character")
	output_size=sizeof(char);
	else if(type=="Integer")
	output_size=sizeof(int);
	
	return output_size;
	
}



