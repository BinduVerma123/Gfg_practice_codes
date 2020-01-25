#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k,i,f=0;
	    cin >>n >> k;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    int m=a[0];
	    sort(a,a+n);
	    int l=0,e=n-1;
	    while(l<e)
	    {
	        if(a[l] + a[e] > k)
	        e--;
	        else if(a[l] +a[e] < k)
	        l++;
	        else if(a[l] + a[e] == k)
	        {f=1;
	        break;
	        }
	    }
	    if(f==1)
	    cout << "Yes" << endl;
	    if(f==0)
	    cout << "No" << endl;
	}
	return 0;
}
