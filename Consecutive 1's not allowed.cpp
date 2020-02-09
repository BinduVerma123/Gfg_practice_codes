#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    int dp[n+1];
    dp[0]=0,dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=(dp[i-1]+dp[i-2])%1000000007;
    }
    return dp[n];
}
int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    //int d[n];
	   // int i=0;
	   int k=n+2;
	    cout << fib(k)%1000000007 << endl;
	}
	return 0;
}
