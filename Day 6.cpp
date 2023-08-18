bool checkArmstrong(int n){
	//Write your code here
	int count=0;
	int og_n=n;
	int sum=0;

	while(n>0)
	{

		n=n/10;
		count++;
	}

	n=og_n;

	while(n>0)
	{
		int k;
		k=n%10;
		sum=sum+pow(k,count);
		n=n/10;

	}	
	n=og_n;

	if(sum==n)
	{
		return true;
	}
	else
	{
		return false;

	}

}
