/*
author:-Anurag Mishra
problem:-algo_tb(week5(problem-2)
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
   long long n,c=0;
    cin>>n;
    if(n==1){
        cout<<0<<endl<<1<<endl;
    }
    else{
        list<long long> mylist{};

    mylist.push_front(n);
    while(n>1){
        c++;
        if(n%3==0){
            n/=3;
        }
        else if(n%2==0&&(n-1)%3!=0){
            n/=2;
        }
        else{
            n--;
        }
        mylist.push_front(n);
    }

    cout<<c<<endl;
    for (auto it = mylist.begin(); it != mylist.end(); ++it)
        cout<< *it<<" ";
}cout<<endl;
    }
