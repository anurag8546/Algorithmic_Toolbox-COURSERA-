/*
author:-Anurag Mishra
problem:-algo_tb(week4(problem-3)
*/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
using ll=long long;
void improve_quick_sort(){
int n;cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n,greater<>());
for(int i=0;i<n;i++){
    cout<<a[i];
}cout<<endl;
}

int main()
{
improve_quick_sort();
}
