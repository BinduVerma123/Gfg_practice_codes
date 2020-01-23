#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    long int n,i,c=0,j,t;
	    cin >> n;
	    long int a[n];
	    long int minn[n];
	    memset(minn,INT_MAX,sizeof(minn));
	    minn[0]=0;
	    for(i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    for(i=1;i<n;i++)
	    {
	        minn[i]=INT_MAX;
	        for(j=0;j<i;j++)
	        {
	            if(i<=j+a[j])
	            {
	              minn[i]=min(minn[j]+1,minn[i]);  
	            }
	        }
	    }
	   /* for(i=0;i<n;i++)
	    {
	        cout << minn[i] << " ";
	    }*/if(minn[n-1]!=INT_MAX)
	    cout << minn[n-1] << endl;
	    else
	    cout << -1 << endl;
	    
	}
	return 0;
}
