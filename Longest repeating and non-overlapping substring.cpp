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
	    string s;
	    cin >> s;
	    int dp[n+1][n+1];
	    int i,j;
	    for(i=0;i<=n;i++)
	    {
	        for(j=0;j<=n;j++)
	        {
	            dp[i][j]=0;
	        }
	    }
	    int m=0,index=0,k;
	    for(i=1;i<=n;i++)
	    {
	        for(j=i+1;j<=n;j++)
	        {
	            if(s[i-1]==s[j-1] )
	            {
	                dp[i][j] = dp[i-1][j-1]+1;
	                if(m<dp[i][j])
	                {
	                m=dp[i][j];
	                k=i;
	                index=max(j,index);
	                }
	            }
	        }
	    }
	    //stack<char>q;
	    /*for(i=index-m;i<index;i++)
	    {
	       /* if(dp[k][i]==0)
	        {//k--;
	        break;
	        }
	        else
	        {
	            q.push(s[i-1]);
	        }
	        k--;
	        cout << s[i];
	    }*/
	    if(m>0)
	    cout << s.substr(index-m,m)<<endl;
	    else
	    cout << -1 << endl;
	   /* while(!q.empty())
	    {
	        cout << q.top();
	        q.pop();
	    }
	   // cout << max << endl;*/
	   // cout << k << " " << index;
	}
	return 0;
}
