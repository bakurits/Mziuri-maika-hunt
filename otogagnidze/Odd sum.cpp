#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>> n;
    int a[n+1],b[n+1],c1[n+1],c2[n+1];
    for(int i=1;i<=n;i++){
        c1[i]=0;
        c2[i]=0;
    }
    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i];
        if(a[i]%2==0)
            c2[i]++;
        if(b[1]%2==0)
            c2[i]++;
        c1[i]=2-c2[i];
    }
    int dp1[n+1],dp2[n+1];
    dp1[1]=c1[1];
    dp2[1]=c2[1];
    for(int i=2;i<=n;i++){
        dp1[i]=dp1[i-1]*c2[i]+dp2[i-1]*c1[i];
        dp2[i]=dp1[1-1]*c1[i]+dp2[i-1]*c2[i];
    }
    cout<<dp1[n];
}
