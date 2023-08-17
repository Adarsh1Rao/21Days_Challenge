int sumFirstN(int n) {
    // Write Your Code Here
    int sum=0;
    int i=1;
    while(i<n+1)
    {
        sum=sum+i;
        i=i+1;
    }

    return sum;
}