#include<bits/stdc++.h>
using namespace std;
int n, k, t, i;
long long ans;
vector<int> a;
int main()
{
	cin>>t;
	while(t>0)
	{
		t--;
		cin>>n>>k;
		for(i=0; i<n; i++)
		{
			a.push_back(0);
			cin>>a[i];
		}
		sort(a.begin(), a.end());
		for(i=0; i<k+1; i++)
		{
			ans+=a[a.size()-1];
			a.pop_back();
		}
		cout<<ans<<endl;
		ans=0;
		for(i=0; i<n-k-1; i++)
		{
			a.pop_back();
		}
	}
	return 0;
}