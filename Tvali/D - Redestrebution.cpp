#include<bits/stdc++.h>
using namespace std;
int s, i;
int main()
{
	cin>>s;
	int dp[s+1];
	dp[0]=1;
	dp[1]=0;
	dp[2]=0;
	for(i=3; i<=s; i++)
	{
		dp[i]=(dp[i-1]+dp[i-3])%(1000000007);
	}
	cout<<dp[s];
	return 0;
}