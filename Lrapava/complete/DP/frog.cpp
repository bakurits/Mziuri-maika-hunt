// Problem: https://www.e-olymp.com/en/contests/17372/problems/181194
// Submission: https://www.e-olymp.com/en/submissions/7436496
// Solution by Lrapava.

#include <iostream>
using namespace std;

long long myAbs(long long x) {
  if (x < 0) return -x;
  return x;
}

long long myMin(long long a, long long b) {
  if (a > b) return b;
  return a;
}

int main() {
  int n;
  cin >> n;

  long long arr[n+10];
  long long dp[n+10];

  for (int i = 1; i < n + 10; i++) {
    dp[i] = 999999999999999999;
  }

  dp[0] = 0;
  
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {
    dp[i+1] = myMin(dp[i+1], dp[i] + myAbs(arr[i] - arr[i+1]));
    dp[i+2] = myMin(dp[i+2], dp[i] + myAbs(arr[i] - arr[i+2]));
  }

  cout << dp[n-1] << endl;

}
