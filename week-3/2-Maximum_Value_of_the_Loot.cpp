/*
author:-Anurag Mishra
problem:-algo_tb(week3(problem-2))
*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
	int n,CAPACITY;
	cin>>n>>CAPACITY;
	vector<pair<int, int>>wt_arr(n);
	vector<pair<double,int>>value_arr(n);
	for (int i=0;i<n;i++) {
		cin >>wt_arr[i].first >>wt_arr[i].second;
		value_arr[i].first = 1.0 *wt_arr[i].first / wt_arr[i].second;
		value_arr[i].second = wt_arr[i].second;
	}
	sort(value_arr.begin(),value_arr.end(),greater<pair<double,int>>());
	double ans = 0;
	for (int i = 0; i < value_arr.size() &&CAPACITY>0; i++) {
		ans+= min(value_arr[i].second, CAPACITY)*value_arr[i].first;
		CAPACITY -= min(value_arr[i].second,CAPACITY);
	}
	cout << fixed << setprecision(4) << ans << endl;
}
