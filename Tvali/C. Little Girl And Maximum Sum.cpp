#include<bits/stdc++.h>
using namespace std;
int n, q, i;
long long s;
vector<int> a, l, r, b;
int main()
{
	cin>>n>>q;
	for(i=0; i<n; i++)
	{
		a.push_back(0);
		b.push_back(0);
		cin>>a[i];
	}
	for(i=0; i<q; i++)
	{
		l.push_back(0);
		r.push_back(0);
		cin>>l[i]>>r[i];
		b[l[i]-1]++;
		if(r[i]!=n)
		{
			b[r[i]]--;
		}
	}
	for(i=1; i<n; i++)
	{
		b[i]+=b[i-1];
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for(i=0; i<n; i++)
	{
		s+=(long long)a[i]*b[i];
	}
	cout<<s;
	return 0;
}