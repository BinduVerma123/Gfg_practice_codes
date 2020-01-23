#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int a[n];
	    int i,j;
	    for(i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    int s=0;
	    
	    for(i=0;i<n;i++)
	    {
	        s=s+a[i];
	    }
	    sort(a,a+n);
	    if(s%2==0)
	    {
	      bool dp[n+1][s/2+1];
	      dp[0][0]=true;
	       for(i=1;i<s/2;i++)
	       {
	        dp[0][i]=false;
	       }
	       for(i=1;i<n+1;i++)
	          {
	            for(j=0;j<s/2+1;j++)
	            {
	            //if(i==0 && j==0)
	            //dp[i][j]=true;
	           // else if(i==0)
	           // dp[i][j]=false;
	            if(a[i-1]>j)
	            dp[i][j]=dp[i-1][j];
	            else if(j>=a[i-1] )
	            dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i-1]];
	             }
	           }
	if(dp[n][s/2]==true)
	    cout << "YES" << endl;
	    else
	    cout << "NO" << endl;
	    }
	    else
	    cout << "NO" << endl;
	}
	return 0;
}
