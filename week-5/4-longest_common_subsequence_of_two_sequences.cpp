#include <iostream>
#include <vector>

using namespacse std;

void print(vector<vector<long long>> v)
{
  for (auto x : v)
  {
    for (auto y : x)
    {
      cout << y << " ";
    }
    cout << "\n";
  }
  cout << "\n";
}

int lcs2(vector<long long> &a, vector<long long> &b)
{
  
  vector<vector<long long>> dp(a.size() + 1, vector<long long>(b.size() + 1, 0));
  for (size_t i = 1; i <= a.size(); i++)
  {
    for (size_t j = 1; j <= b.size(); j++)
    {
      if (a[i - 1] == b[j - 1])
      {
        dp[i][j] = dp[i - 1][j - 1] + 1;
      }
      else
      {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }
  return dp[a.size()][b.size()];
}

int main()
{
  size_t n;
  cin >> n;
  vector<long long> a(n);
  for (size_t i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  size_t m;
  std::cin >> m;
  vector<long long> b(m);
  for (size_t i = 0; i < m; i++)
  {
    std::cin >> b[i];
  }

  std::cout << lcs2(a, b) << std::endl;
}
//not purely mine
