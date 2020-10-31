// Problem: https://www.e-olymp.com/en/contests/17372/problems/181192
// Submission: https://www.e-olymp.com/en/submissions/7436673
// Solution by Lrapava.

#include <iostream>
using namespace std;

const long long MOD = 1000000007;

int main() {
  int n;
  cin >> n;

  long long arr[n+10];

  for (int i = 0; i < n + 10; i++) {
    arr[i] = 0;
  }

  arr[0] = 1;

  for (int i = 0; i < n; i++) {
    for (int j = 1; j < 7; j++) {
      arr[i + j] += arr[i];
      arr[i + j] %= MOD;
    }
  }

  cout << arr[n];

}
