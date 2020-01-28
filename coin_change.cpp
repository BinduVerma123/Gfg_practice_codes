#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	 int n,j;
	cin >> n;
	int a[n]; 
	int i;
	for(i=0;i<n;i++)
	{
	    cin >> a[i];
	}
	int x;
	cin >> x;
	int dp[n+1][x+1];
	dp[0][0]=1;
	/*for(i=1;i<=x;i++)
	{
	  dp[0][i]=0;  
	}*/
/*	for(i=0;i<=n;i++)
	{
	    dp[i][0]=1;
	}*/
	for(i=0;i<=n;i++)
	{
	    for(j=0;j<=x;j++)
	    {
	        if(i==0 && j==0)
	        dp[i][j]=1;
	        else if(i==0)
	        dp[i][j]=0;
	       else if(j==0)
	        dp[i][j]=1;
	       else if(a[i-1]>j)
	        dp[i][j]=dp[i-1][j];
	        else
	        {
	            dp[i][j]=dp[i-1][j]+dp[i][j-a[i-1]];
	        }
	    }
	}
	cout << dp[n][x] << endl;
	}
	return 0;
}
