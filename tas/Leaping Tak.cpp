#include <bits/stdc++.h>
using namespace std;
long long mod,ans=0, n,k;
long long l[1000000],r[1000000],dp[1000000];
int main() {
  cin>>n>>k;
  mod=998244353;
  dp[n+5]={0};
  for (int i=0;i<k;i++)
    cin>>l[i]>>r[i];

    dp[0]=0;
    dp[1]=1;
    dp[2]=-1;

    for (int i=1;i<=n+1;i++){
      dp[i]=((dp[i]+dp[i-1])%mod+mod)%mod;
      for (int j=1;j<=k;j++){
        if (l[j]+i<=n){
          dp[i+l[j]]+=dp[i];
        }
        if (i+r[j]+1<=n){
          dp[i+r[j]+1]-=dp[i];
        }
      }
    }
   
    cout<<dp[n]%mod;

  
}