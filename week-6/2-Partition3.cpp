/*
author:-Anurag Mishra(2:22AM)
problem:-partition3(Algo_tb_week(6)problem 2)
tag:-DP
*/
#include <iostream>
#include <vector>
using namespace std;
using std::vector;

void solve() {
  int n,sum=0;
  cin>>n;int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
  }
  if(sum%3!=0){
    cout<<0<<endl;
    return;
  }
  else{
    int w=sum/3;
    bool t[n+1][w+1];
    for (int i = 0; i <= n; i++)
            t[i][0] = true;
        for (int i = 1; i <= w; i++)
            t[0][i] = false;
        for(int i=1;i<=n;i++){
          for(int j=1;j<=w;j++){

            t[i][j]=t[i-1][j];
            if(a[i-1]<=j){
              t[i][j]|=t[i-1][j-a[i-1]];
            }
          }
        }
        if(t[n][w])
        cout<<1<<endl;
        else
        cout<<0<<endl;
  }
}

int main() {
solve();
}
