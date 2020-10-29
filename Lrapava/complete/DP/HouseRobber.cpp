// Problem: https://www.e-olymp.com/en/problems/1619
// Submission: https://www.e-olymp.com/en/submissions/7440438
// Solution by Lrapava

#include <iostream>
using namespace std;

int main() {
  
  long long n, ans = 0;
  cin >> n;

  long long arr [n + 10];
  long long  dp [n + 10];

  for (long long i = 0; i < n; i++) {
    cin >> arr[i];
    dp[i] = 0;
  }

  dp[0] = arr[0];
  dp[1] = arr[1];

  for (long long i = 0; i < n; i++) {
    dp[i + 2] = max(dp[i + 2], dp[i] + arr[i + 2]);
    dp[i + 3] = max(dp[i + 3], dp[i] + arr[i + 3]);
    ans = max(ans,dp[i]);
  }

  cout << ans;

}