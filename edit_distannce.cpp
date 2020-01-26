#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int p,q;
	    cin >> p >> q;
	    string a,b;
	    cin >> a >> b;
	    int i,j;
	    int dp[p+1][q+1];
	    for(i=0;i<=p;i++)
	    {
	        for(j=0;j<=q;j++)
	        {
	            if(i==0)
	            dp[i][j]=j;
	            else if(j==0)
	            dp[i][j]=i;
	            else if(a[i-1] == b[j-1])
	            dp[i][j]=dp[i-1][j-1];
	            else
	            {
	                dp[i][j]=min(min(dp[i-1][j],dp[i-1][j-1]),dp[i][j-1])+1;
	            }
	        }
	    }
	    cout << dp[p][q] << endl;
	}
	return 0;
}
