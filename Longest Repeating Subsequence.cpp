#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string s1;
	    cin >> s1;
	    int i,j;
	    int dp[n+1][n+1];
	    for(i=0;i<=n;i++)
	    {
	        for(j=0;j<=n;j++)
	        {
	            if(i==0||j==0)
	            dp[i][j]=0;
	            else if(s1[i-1]==s1[j-1] && i!=j)
	            dp[i][j]=1+dp[i-1][j-1];
	            else
	            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	        }
	    }
	    cout << dp[n][n] << endl;
	}
	
	return 0;
}
