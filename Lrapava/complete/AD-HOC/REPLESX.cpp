// Problem: https://www.codechef.com/OCT20B/problems/REPLESX
// Submission: https://www.codechef.com/viewsolution/38733236
// Solution by Lrapava

#include <iostream>

int main() {
  
  int t;
  std::cin >> t;
  
  int n, x, p, k, j;
  int xNum, xPlusNum, xMinusNum;
  
  while (t--) {
    
    std::cin >> n >> x >> p >> k;
    xNum = 0; xPlusNum = 0; xMinusNum = 0;
    
    for (int i = 0; i < n; i++) {
      std::cin >> j;
      if (j == x) xNum++;
      if (j >  x) xPlusNum++;
      if (j <  x) xMinusNum++; 
    }

    // check if 0
    if (xMinusNum < p && (xMinusNum + xNum >= p)) {
      std::cout << "0\n";
      continue;
    }
    
    // check if -1
    if ((xPlusNum > n - p) && k < p) {
      std::cout << "-1\n";
      continue;
    }
    
    if ((xMinusNum >= p) && k > p) {
      std::cout << "-1\n";
      continue;
    }
    
    // other answers
    if (xMinusNum >= p) {
      std::cout << xMinusNum - (p - 1) << "\n";
      continue;
    }

    if (xPlusNum > n - p) {
      std::cout << xPlusNum - (n - p) << "\n";
      continue;
    }

  }

}
