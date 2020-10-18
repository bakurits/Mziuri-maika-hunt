#include <bits/stdc++.h>
using namespace std;

int fir,sec,i,h[1000000],n,a[1000000];
int main() {
  cin>>n;
  for (int i=0;i<n;i++){
    cin>>a[i];
  }
  h[0]=0;
  h[1]=abs(a[1]-a[0]);
  i=2;
  while (i<n){
    fir=h[i-1]+abs(a[i]-a[i-1]);
    sec=h[i-2]+abs(a[i]-a[i-2]);

    h[i]=min(fir,sec);

    i++;
  }
  cout<<h[n-1];
}