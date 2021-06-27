/*
author:Anurag Mishra
problem:Algo_Tb Week-6 problem 1
*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;
int optimal_weight(int W, const vector<int> &wt_arr)
{
  vector<vector<int>> val_arr(wt_arr.size() + 1, vector<int>(W + 1, 0));

  for (size_t i = 1; i <= wt_arr.size(); i++)
  {
    for (int w = 1; w <= W; w++)
    {
      if(wt_arr[i-1]>w)
      val_arr[i][w]=val_arr[i-1][w];
    else
      val_arr[i][w]=max(val_arr[i-1][w],val_arr[i-1][w-wt_arr[i-1]]+wt_arr[i-1]);

    }
    
  }
  return val_arr[wt_arr.size()][W];
}

int main()
{
  int n, W;
  cin >> W >> n;
  vector<int>t(n);
  for (int i = 0; i < n; i++)
  {
    cin >>t[i];
  }
 cout << optimal_weight(W,t) << '\n';
}
