/*
author:-Anurag Mishra
problem:-algo_tb(week3(problem-3(4)))
*/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
using ll=long long;
ll max_dot_product(vector<int>a,vector<int>b){
  ll result = 0;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  for (ll i=0;i<a.size();i++)
  {
    result += ((ll)a[i]) * b[i];
  }

  return result;
}

int main()
{
  ll n;
  cin >> n;
  vector<int>a(n),b(n);
  for(ll i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(ll i=0;i<n;i++)
  {
    cin>>b[i];
  }
  cout<<max_dot_product(a,b)<<endl;
}
