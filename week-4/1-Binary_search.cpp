/*
author:-Anurag Mishra
problem:-algo_tb(week 4(problem 1))
*/
#include <bits/stdc++.h>
using ll=long long int;
using namespace std;
int BinarySearch(vector<int>a, int n, int x) {
	int l = 0, r = n - 1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (a[mid] == x)
			return mid;
		else if (a[mid] < x) {
			l = mid + 1;
		}
		else if (a[mid] > x) {
			r = mid - 1;
		}
	}
	return -1;
}
void SecondinFirst(vector<int>p, int n, vector<int>q, int k){
	for (int i = 0; i < k; i++)
		cout << BinarySearch(p,n,q[i]) << " ";
}
int main() {
	int n;
	cin >> n;
	vector<int>p(n);
	for (size_t i = 0; i < n; i++)
		cin >>p[i];

	int k;
	cin >> k;
	vector<int>q(k);
	for (size_t i = 0; i < k; i++)
		cin >> q[i];

	SecondinFirst(p, n, q, k);
}
