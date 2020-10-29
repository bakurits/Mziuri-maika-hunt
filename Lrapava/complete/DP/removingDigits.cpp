// Problem: https://www.e-olymp.com/en/contests/17372/problems/181193
// Submission: https://www.e-olymp.com/en/submissions/7436608
// Solution by Lrapava.

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  long long arr[n+10];

  for (int i = 0; i < n + 10; i++) {
    arr[i] = 8999999999999999999;
  }

  arr[n] = 0;

  int d;

  for (int i = n; i > 0; i--) {
    d = i;
    while (d > 0) {
      arr[i - d % 10] = min(arr[i - d % 10], arr[i] + 1);
      d /= 10;
    }
  }

  cout << arr[0];

}
