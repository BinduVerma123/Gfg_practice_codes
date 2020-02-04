#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n,w;
	cin >> n >> w;
	int a[n],b[n];
	int i,j;
	for(i=0;i<n;i++)
	{
	    cin >> a[i];
	}
	for(i=0;i<n;i++)
	{
	    cin >> b[i];
	}
	int dp[w+1];
	memset(dp,0,sizeof(dp));
	for(i=0;i<=w;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        if(b[j]<=i)
	       dp[i]=max(dp[i],dp[i-b[j]]+a[j]); 
	    }
	}
	cout << dp[w]<< endl;
	}
	return 0;
}
