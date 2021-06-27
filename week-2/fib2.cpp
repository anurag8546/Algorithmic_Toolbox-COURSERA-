/*
author:-Anurag Mishra
problem:-algo_tb(week2(problem-2))
*/

#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll solve(int n)
{
	int fib[n+1];
	fib[0] = 0;
	fib[1] = 1;
	for (int i = 2; i <= n; i++)
		fib[i] = (fib[i - 1]%10 + fib[i - 2]%10)%10;
	return fib[n];
}
int main()
{
	int n;
	cin >> n;
	cout << solve(n) << endl;
}
