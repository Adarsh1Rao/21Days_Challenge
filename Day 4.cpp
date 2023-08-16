
void recursiveSol(vector<int> &ans,int x,int i)
{
    if(i==(x+1))
    return;
    else
    {
        ans.push_back(i);
        recursiveSol(ans,x,++i);
    }
}

vector<int> printNos(int x)
{
    vector<int>ans;
    recursiveSol(ans,x,1);
    return ans;
}