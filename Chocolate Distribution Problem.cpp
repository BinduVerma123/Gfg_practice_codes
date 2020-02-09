#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int m;
	    long int n,i,k;
	    cin >> n;
	    long int a[n];
	    //vector<int>b;
	    for(i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    cin >> k;
	    sort(a,a+n);
	    int max=INT_MAX;
	    for(i=0;i<n-k+1;i++)
	    {
	       m=a[k+i-1]-a[i];
	       if(max>m)
	       max=m;
	      // b.push_back(m);
	    }
	   // sort(b.begin(),b.end());
	    cout << max << endl;
	}
	return 0;
}
