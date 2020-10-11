#include<bits/stdc++.h>
using namespace std;
int n, t, i;
int main()
{
	cin>>t;
	while(t>0)
	{
		t--;
		cin>>n;
		cout<<2<<endl;
		cout<<n<<" "<<n-1<<endl;
		for(i=n; i>2; i--)
		{
			cout<<i<<" "<<i-2<<endl;
		}
		cout<<endl;
	}
	return 0;
}