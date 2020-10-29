// Problem: https://www.e-olymp.com/en/contests/17372/problems/181186
// Submission: https://www.e-olymp.com/en/submissions/7440494
// Solution by Lrapava

#include <iostream>
using namespace std;

long long solve(long long n) {
  
  if (n == 1) return 0;
  long long arr[n + 10];

  for (long long i = 0; i < n + 10; i++) {
    arr[i] = 8999999999999999999;
  }

  arr[n] = 0;

  for (int i = n; i > 0; i--) {
    arr[i - 1] = min(arr[i - 1], arr[i] + 1);
    if (!(i % 3)) arr[i / 3] = min(arr[i / 3], arr[i] + 1);
    if (!(i % 2)) arr[i / 2] = min(arr[i / 2], arr[i] + 1);
  }

  return arr[1];

}

int main() {
  long long n;
  while(cin >> n) {
    cout << solve(n) << endl;
  }
}