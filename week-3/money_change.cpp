/*
author:-Anurag Mishra
problem:-algo_tb(week3(problem-1))
*/
#include <iostream>
using namespace std;
using ll=long long int;
void solve(int n){
    int a,b,c=0,d,e,f;
   
   if(n>10){
       d=n%10;
    n/=10;
    c+=n;
   
  if(d>=5){
        e=d%5;
        d/=5;
        c+=d;
      
    
      if(e>0){
        c+=e;
    }
  }
  else{
      c+=d;
  }
   }
   else{
       f=n%5;
       n/=5;
       c+=n;
       if(f>0){
           c+=f;
       }
   }
cout<<c<<endl;
}

int main() {
  ll a,b;
  cin>>a;
  solve(a);
  
}

