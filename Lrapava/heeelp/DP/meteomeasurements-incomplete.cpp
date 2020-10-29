// Problem: https://www.e-olymp.com/en/problems/3869
// Submission: https://www.e-olymp.com/en/submissions/7439580
// Solution by Lrapava (incomplete).

#include <iostream>
using namespace std;

int main() {
  
  long long n, k, p;
  cin >> n >> k;

  long long prefix[n+10];

  prefix[0] = 0;

  for (long long i = 1; i <= n; i++) {
    cin >> p;
    prefix[i] = prefix[i-1] + p;
  }

  long long miin = 8999999999999999999, maax = -8999999999999999999;

  for (long long i = k; i <= n; i++) {
    miin = min(miin, prefix[i] - prefix[i-k]);
    maax = max(maax, prefix[i] - prefix[i-k]);
  }

  if (k - miin % k <= miin % k) cout << miin / k + 1; else cout << miin / k;
  cout << endl;
  if (k - maax % k <= maax % k) cout << maax / k + 1; else cout << maax / k;

}