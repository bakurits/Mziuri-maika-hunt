// Problem: https://www.e-olymp.com/en/contests/17372/problems/181191
// Submission: https://www.e-olymp.com/en/submissions/7436794
// Solution by Lrapava.

#include <iostream>
using namespace std;

int main() {
  long long n, a, b;
  cin >> n >> a >> b;

  long long p, c, s, ans = 0;
  cin >> p;

  for (int i = 1; i < n; i++) {
    cin >> c;
    s = min((c - p) * a, b);
    ans += s;
    p = c;
  }

  cout << ans;

}
