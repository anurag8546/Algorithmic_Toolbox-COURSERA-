/*
author:-Anurag Mishra
problem:-algo_tb(week2(problem-4))
*/
#include <iostream>
using namespace std;
using ll=long long int;
ll lcm(ll a, ll b) {
  for(ll l=1;l<=(ll)a*b;l++)
    if(l%a==0&&l%b==0)
      return l;

  return (ll)a*b;
}

int main() {
  ll a,b;
  cin>>a>>b;
  cout<<lcm(a, b)<<endl;
  return 0;
}

