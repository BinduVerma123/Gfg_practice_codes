#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >>t ;
	while(t--)
	{
	    int n,k,i;
	    cin >> n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin >>a[i];
	    }
	    cin >> k;
	    sort(a,a+n);
	    cout << a[k-1] << endl;
	    
	}
	return 0;
}
