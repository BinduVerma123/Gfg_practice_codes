#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	   long long int n,i,j;
	    cin >> n;
	    long long int a[n]; 
	    for(i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    //int j;
	   long long int l[n];
	    for(i=0;i<n;i++)
	    {
	      l[i]=1;  
	    }
	    for(i=1;i<n;i++)
	    {
	        for(j=0;j<i;j++)
	        {
	            if(a[i]>a[j] && l[i]<l[j]+1)
	            l[i]=l[j]+1;
	        }
	    }
	    int max=0;
	    for(i=0;i<n;i++)
	    {
	        if(max<l[i])
	        max=l[i];
	    }
	    cout << max << endl;
	}
	return 0;
}
