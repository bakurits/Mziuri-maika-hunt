#include <algorithm>
#include <iostream>
#include <vector>

int n;
std::vector <int> t;

bool was[200][420];
int  val[200][420];
 
int solve(int p_a, int p_b){
  if (p_a >= n) {
    return 0;
  }

  if (p_b >= 2 * n + 2) {
    return 999999999;
  }

  if (was[p_a][p_b]) {
    return val[p_a][p_b];
  }

  int A = solve(p_a, p_b + 1);
  int B = solve(p_a + 1, p_b + 1) + abs(p_b - t[p_a]);
  
  val[p_a][p_b] = std::min(A, B);
  was[p_a][p_b] = true;
  
  return val[p_a][p_b];
}
 
int main() {
  
  int q, x;
  std::cin >> q;
  
  while (q--) {
    
    // reset stuff
    t.clear();
    for (int i = 0; i < n; i++){
      for (int j = 0; j < 2 * n + 2; j++){
        was[i][j] =  false;
      }
    }

    // input
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
      std::cin >> x;
      t.push_back(x);
    }

    // sort elements
    std::sort(t.begin(), t.end());

    // output answer
    std::cout << solve(0, 1) << "\n";
  }

	return 0;

}