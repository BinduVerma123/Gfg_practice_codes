#include <iostream>
#include<bits/stdc++.h>
#define M 1000000007
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n,m;
	    cin >> n >> m;
	    int a[n][m];
	    int i,j;
	    for(i=0;i<n;i++)
	    {
	        a[i][0]=1;
	    }
	    for(j=0;j<m;j++)
	    {
	        a[0][j]=1;
	    }
	    for(i=1;i<n;i++)
	    {
	        for(j=1;j<m;j++)
	        {
	           a[i][j]=(a[i-1][j]%M+a[i][j-1]%M)%M; 
	        }
	    }
	    cout << a[n-1][m-1] << endl;
	}
	return 0;
}
