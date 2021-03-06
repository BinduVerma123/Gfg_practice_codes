#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k;
	    cin >> n >> k;
	    int dp[n+1][k+1];
	    int i,j,x,res;
	    for(i=1;i<=n;i++)
	    {
	        dp[i][1]=1;
	        dp[i][0]=0;
	    }
	    
	    for(i=1;i<=k;i++)
	    {
	        dp[1][i]=i;
	    }
	    for(i=2;i<=n;i++)
	    {
	        for(j=2;j<=k;j++)
	        {
	            dp[i][j]=INT_MAX;
	            for(x=1;x<=j;x++)
	            {
	            res=1+max(dp[i-1][x-1],dp[i][j-x]);
	            if(res<dp[i][j])
	            dp[i][j]=res;
	            }
	        }
	    }
	    cout << dp[n][k] << endl;
	}
	return 0;
}
