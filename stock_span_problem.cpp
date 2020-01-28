#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int a[n],y[n],i;
	    for(i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    stack<int>s;
	    s.push(0);
	    y[0]=1;
	    for(i=1;i<n;i++)
	    {
	        while(!s.empty() && a[s.top()]<=a[i])
	        s.pop();
	        y[i]=s.empty()?i+1:(i-s.top());
	        s.push(i);
	        
	    }
	    for(i=0;i<n;i++)
	    {
	        cout << y[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
