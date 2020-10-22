#include <bits/stdc++.h>
using namespace std;
int i,n,dp[1000000];
int main() {
  cin>>n;
  dp[0]=2; dp[1]=4; dp[2]=7;
  i=3;
  while (i<n){
    dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    dp[i]%=12345;
    i++;

  }
  cout<<dp[n-1];
}