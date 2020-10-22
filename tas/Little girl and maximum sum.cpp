#include <bits/stdc++.h>
using namespace std;
long long ans=0;
int tas[1000000],l,r,q,a[1000000],n;
int main() {
  cin>>n>>q;
  for (int i=0;i<n;i++){
    cin>>a[i];

  }
  sort(a,a+n);
  for (int i=0;i<q;i++){
    cin>>l>>r;
    tas[l-1]++;
    tas[r]--;
    
  }

  for (int i=1;i<n;i++){
    tas[i]+=tas[i-1];
  }
  sort(tas,tas+n);
  for (int i=0;i<n;i++)
    ans+=(long long)a[i]*tas[i];
  cout<<ans;
 
}