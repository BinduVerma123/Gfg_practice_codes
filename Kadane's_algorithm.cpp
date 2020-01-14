#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    long int n,i,m,z;
	    cin >> n;
	    long long int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    m=a[0],z=a[0];
	    for(i=1;i<n;i++)
	    {
	        m=max(a[i],m+a[i]);
	        z=max(z,m);
	    }
	    cout << z << endl;
	}
	return 0;
}
