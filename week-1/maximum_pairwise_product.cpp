/*
author:-Anurag Mishra
problem:-week1(problem-2)
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long int;
ll MaxPairwiseProduct(const vector<ll> &v){
    ll max_product = 0;
    ll n = v.size();
    ll a = -1;
    ll b= -1;
    for (ll i = 0; i < n; i++){
        ll number = v.at(i);
        if (number >a){
            b=a;
            a= number;
        }
        else if (number > second) {
            b= number;
        }
    }

    max_product = ((ll)a) * b;
    return max_product;
}

int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;++i)
    {
       cin>>v[i];
    }

    cout<<MaxPairwiseProduct(v)<<"\n";
    return 0;
}
