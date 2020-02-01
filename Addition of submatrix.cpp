#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n,m;
	    cin >> n >> m;
	    int c[n][m],i,j;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            cin >> c[i][j];
	        }
	    }
	    int x1,x2,y1,y2,s=0;
	    cin >> x1 >> y1 >> x2 >> y2;
	    for(i=x1-1;i<x2;i++)
	    {
	        for(j=y1-1;j<y2;j++)
	        {
	            s=s+c[i][j];
	        }
	    }
	    cout << s << endl;
	}
	return 0;
}
