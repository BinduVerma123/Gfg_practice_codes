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
	    int s=0;
	    for(i=0;i<n;i++)
	    {
	        s=s+a[i];
	    }
	    bool dp[n+1][s+1];
	    dp[0][0]=true;
	    for(i=1;i<=s;i++)
	    {
	        dp[0][i]=false;
	    }
	    for(i=1;i<=n;i++)
	    {
	        for(j=0;j<=s;j++)
	        {
	            if(a[i-1]>j)
	            dp[i][j]=dp[i-1][j];
	            else if(a[i-1]<=j)
	            {
	              dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i-1]];  
	            }
	        }
	    }
	    int diff;
	    for(j=s/2;j>=0;j--)
	    {
	        if(dp[n][j])
	        {
	            diff=s-2*j;
	            break;
	        }
	    }
	    cout << diff << endl;
	}
	return 0;
}
