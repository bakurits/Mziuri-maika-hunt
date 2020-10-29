// Problem: https://www.e-olymp.com/en/contests/17372/problems/181189
// Submission: https://www.e-olymp.com/en/submissions/7439402
// Solution by Lrapava.

#include <iostream>
using namespace std;

int main() {
  
  int n, k;
  cin >> n >> k;
  
  int arr[n + k + 10];

  for (int i = 0; i < n + k + 10; i++) {
    arr[i] = 0;
  }

  arr[1] = 1;

  for (int i = 1; i < n; i++) {
    for (int j = 1; j <= k; j++) {
      arr[i + j] += arr[i];
    }
  }

  cout << arr[n];

}
