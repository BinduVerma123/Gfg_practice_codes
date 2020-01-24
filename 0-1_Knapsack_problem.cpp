#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n,w;
	    cin >> n;
	    cin >> w;
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
	    int dp[n+1][w+1];
	    for(i=0;i<=n;i++)
	    {
	        for(j=0;j<=w;j++)
	        {
	            if(i==0 || j==0)
	            dp[i][j]=0;
	            else if(b[i-1] <=j)
	            dp[i][j]=max(a[i-1]+dp[i-1][j-b[i-1]],dp[i-1][j]);
	            else
	            dp[i][j]=dp[i-1][j];
	        }
	    }
	    cout << dp[n][w] << endl;
	}
	return 0;
}
