#include <bits/stdc++.h> 
vector < vector < int > > numberPattern(int n) {

  // Write your code here

  

  vector<vector<int>>p; 
  int num = 1;
  for(int i = 1; i<=n; i++)
  {
    vector<int>r;
    for (int s = 1; s<=n-i; s++)
    {
      r.push_back(-1);
    }


    for(int j = 1; j<=i; j++)
    {
      r.push_back(num);
      num = (num%9)+1;
    }

    p.push_back(r);

  }
  return p;


}