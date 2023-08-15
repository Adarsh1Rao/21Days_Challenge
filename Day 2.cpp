string compareIfElse(int a, int b) {
	// Write your code here
	
	string relation;
	if(a==b)
	relation="equal";
	else if(a>b)
	relation="greater";
	else
	relation="smaller";

	return relation;
}
