#include<bits/stdc++.h>
using namespace std;
int t, n, i, s, a;
int main()
{
	cin>>t;
	while(t>0)
	{
		t--;
		cin>>n;
		s=n%10;
		if(s==1 && n>=11)
		{
			cout<<"2 "<<(n-6)/5<<" 0";
		}
		else if(s==2 && n>=12)
		{
			cout<<"4 "<<(n-12)/5<<" 0";
		}
		else if(s==3)
		{
			cout<<"1 "<<(n-3)/5<<" 0";
		}
		else if(s==4 && n>=14)
		{
			cout<<"0 "<<(n-14)/5<<" 2";
		}
		else if(s==5)
		{
			cout<<"0 "<<n/5<<" 0";
		}
		else if(s==6)
		{
			cout<<"2 "<<(n-6)/5<<" 0";
		}
		else if(s==7)
		{
			cout<<"0 "<<(n-7)/5<<" 1";
		}
		else if(s==8 && n>=8)
		{
			cout<<"1 "<<(n-3)/5<<" 0";
		}
		else if(s==9)
		{
			cout<<"3 "<<(n-9)/5<<" 0";
		}
		else if(s==0)
		{
			cout<<"0 "<<n/5<<" 0";
		}
		else
		{
			cout<<-1;
		}
		cout<<endl;
	}
	return 0;
}