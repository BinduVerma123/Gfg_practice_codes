#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string r[n+1];
	    r[1] = "1";
	    r[2] = "11";
	    int j;
	    for( j=3;j<=n;j++)
	    {
	        string prev=r[j-1];
	        string cur="";
	        for(int i=0;i<prev.size();i++)
	        {
	            int cnt=1;
	            while(prev[i]==prev[i+1] && i<prev.size()-1)
	            {
	                cnt++;
	                i++;
	            }
	            cur=cur+to_string(cnt)+prev[i];
	        }
	        r[j]=cur;
	    }
	    cout << r[n] << endl;
	}
	return 0;
}
