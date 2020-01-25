#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n,m;
	    cin >> n>>m;
	    string str1,str2;
	    cin >> str1 >> str2;
	    int i,j;
	    int dp[n+1][m+1];
	    for(i=0;i<=n;i++)
	    {
	        for(j=0;j<=m;j++)
	        {
	            if(i==0||j==0)
	            dp[i][j]=0;
	            else if(str1[i-1]==str2[j-1])
	            dp[i][j]=dp[i-1][j-1]+1;
	            else
	            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	            
	        }
	    }
	    cout << dp[n][m] << endl;
	}
	return 0;
}
