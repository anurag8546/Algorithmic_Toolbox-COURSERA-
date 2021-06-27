/*
author:-Anurag Mishra
problem:-algo_tb(week5(problem-1)
*/
#include <algorithm>
#include <limits>
#include <bits/stdc++.h>
using namespace std;
int money_change(int m) {
	vector<int> t(m + 1);
	int a,b,c;
	for (int i = 0; i <= m; i++) {
		a =b =c = numeric_limits<int>::max();
		if (i - 1 >= 0) {
			a = 1 + t.at(i - 1);
			if (i - 3 >= 0) {
				b = 1 + t.at(i - 3);
				if (i - 4 >= 0) {c = 1 + t.at(i - 4); }
			}
			t[i] = min(a, min(b,c));
		} else {
			t[i] = 0;
		}
	}
	return t.at(m);
}

int main() {
	int m;
	cin >> m;
	cout << money_change(m) << '\n';
}
