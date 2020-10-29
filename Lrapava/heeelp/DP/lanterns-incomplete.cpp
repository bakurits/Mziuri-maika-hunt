// Problem: https://www.e-olymp.com/en/contests/17372/problems/181190
// Submission: https://www.e-olymp.com/en/submissions/7439162
// Solution by Lrapava (incomplete).

#include <iostream>
using namespace std;

const long long MOD = 1000000007;

int main() {
  
  long long n, k;
  cin >> n >> k;

  long long power[n+10], p = 1, ans = 0;;

  for (long long i = 0; i < n + 10; i++) {
    power[i] = p;
    p *= 2;
    p %= MOD;
  }

  p = power[k - 1];
  
  for (long long i = k; i < n + 10; i++) {
    ans = ((p - power[i-k]) * 2 + power[i-k]) % MOD;
    p = ans;
    if (i == n) break;
  }

  cout << ans;

}
