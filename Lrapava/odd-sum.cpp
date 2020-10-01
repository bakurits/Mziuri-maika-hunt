#include <iostream>

int main() {
  
  long long n, a, b, k;
  std::cin >> n;

  long long arr[n+10][2];

  std::cin >> a >> b;
  arr[0][1] = 0;
  arr[0][0] = 0;
  
  arr[0][a%2]++;
  arr[0][b%2]++;

  for (int i = 1; i < n; i++) {
    std::cin >> a >> b;
    k = (a%2) + (b%2);

    arr[i][0] = arr[i-1][0] * (2 - k) + arr[i-1][1] * k;
    arr[i][1] = arr[i-1][1] * (2 - k) + arr[i-1][0] * k;

  }
  
  std::cout << arr[n-1][1] << "\n";
  return 0;

}
