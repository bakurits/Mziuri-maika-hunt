#include<bits/stdc++.h>
using namespace std;
int t, n, s1, s2, i, nl;
vector<int> a, b, c;
int main()
{
	cin>>t;
	while(t>0)
	{
		t--;
		s1=0;
		s2=0;
		nl=0;
		cin>>n;
		for(i=0; i<n; i++)
		{
			a.push_back(0);
			cin>>a[i];
			if(a[i]<0)
			{
				c.push_back(a[i]);
				s2+=a[i];
			}
			else
			{
				b.push_back(a[i]);
				s1+=a[i];
				if(a[i]==0)
				{
					nl++;
				}
			}
		}
		if(s1+s2!=0)
		{
			cout<<"YES"<<endl;
			if(s1+s2>0)
			{
				while(b.size()>0)
				{
					if(b[b.size()-1]!=0)
					{
						cout<<b[b.size()-1]<<" ";
					}
					b.pop_back();
					a.pop_back();
				}
				while(nl>0)
				{
					cout<<0<<" ";
					nl--;
				}
				while(c.size()>0)
				{
					cout<<c[c.size()-1]<<" ";
					c.pop_back();
					a.pop_back();
				}
			}
			else
			{
				while(c.size()>0)
				{
					cout<<c[c.size()-1]<<" ";
					c.pop_back();
					a.pop_back();
				}
				while(b.size()>0)
				{
					cout<<b[b.size()-1]<<" ";
					b.pop_back();
					a.pop_back();
				}
			}	
		}
		else
		{
			cout<<"NO";
			while(b.size()>0)
			{
				b.pop_back();
				a.pop_back();
			}
			while(c.size()>0)
			{
				c.pop_back();
				a.pop_back();
			}
		}
		cout<<endl;
	}
	return 0;
}