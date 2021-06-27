/*
author:-Anurag Mishra
problem:-algo_tb(week4(problem-2))
*/
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
using ll=long long int;
int main() {
  ll n,flag=0;
  cin >> n;
ll a[n],mx=0,count;
  for (ll i = 0; i < n; ++i){
  cin >> a[i];
  }
map<ll,ll>freq;
for(ll i=0;i<n;i++){
  freq[a[i]]++;
}
for(ll i=0;i<n;i++){
  if(freq[a[i]]>n/2){
  flag=1;
  break;
  }
}
  if(flag==1)cout<<1<<endl;
  else
  cout <<0<< '\n';
  return 0;
}
