

#include <bits/stdc++.h> 
using namespace std;
int fahr(int f)
{
	return (f-32)*5/9;
}
vector<vector<int>> fahrenheitToCelsius (int s, int e, int w)
{

vector<vector<int>>ans;
while(s<=e){
vector<int> temp;
temp.push_back(s);
temp.push_back(fahr(s));
ans.push_back(temp);
s += w;
}
return ans;
}