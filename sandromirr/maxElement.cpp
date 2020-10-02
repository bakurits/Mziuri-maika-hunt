#include <iostream>
using namespace std;
int main(){
  int n,a[1000];
  cin >> n;
  for(int i = 0; i < n ; i++){
    cin >> a[i];
  }
  int maxElement = a[0];
  for(int i = 1 ; i < n ; i++){
    if(a[i] > maxElement){
      maxElement = a[i];
    }
  }
  cout << maxElement << endl;
}