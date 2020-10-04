#include <bits/stdc++.h>
using namespace std;
int mp[10000001];
int f[10000001],b[10000001],sum[10000001];
int main() {
  int n;
  scanf("%d", &n);
  int a;
  for(int i=1;i<=n;i++){
    scanf("%d", &a);
    mp[a]++;
  }
  for(int i=2;i<=10000000;i++){
    if(b[i]==0)
      for(int g=i;g<=10000000;g+=i){
        b[g]++;
        f[i]+=mp[g];
      }
  }
  sum[1]=0;
  for(int i=2;i<=10000001;i++)
    sum[i]=sum[i-1]+f[i];
  int q;
  scanf("%d", &q);
  int l,r;
  for(int i=1;i<=q;i++){
    scanf("%d %d",&l,&r);
    if(l>10000000)
      printf("0\n");
    else
      if(r>10000000)
        printf("%d\n",(sum[10000000]-sum[l-1]));
      else
        printf("%d\n",(sum[r]-sum[l-1]));
  }
}
