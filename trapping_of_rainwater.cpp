#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    long int n,i;
	    cin >> n;
	    long int a[n],b[n],c[n];
	    for(i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    int k=0;
	    //b[k]=a[0];
	   // k++;
	    int max=a[0];
	    
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>=max)
	        {
	        max=a[i];
	       // b[k]=max;
	        }
	        b[k]=max;
	        k++;
	    }
	    int max2=a[n-1];
	    int m=n-1;
	    for(i=n-1;i>=0;i--)
	    {
	     if(a[i]>=max2)
	     {
	         max2=a[i];
	     }
	     c[m]=max2;
	     m--;
	    }
	    int s=0;
	    for(i=0;i<n;i++)
	    {
	        s=s+(min(b[i],c[i])-a[i]);
	    }
	    cout << s << endl;
	}
	return 0;
}
