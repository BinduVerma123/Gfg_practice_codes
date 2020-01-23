#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    long int n,i,k,x,j,l;
	    cin >> n >> k;
	    long int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    deque<int>q(k);
	    for(i=0;i<k;i++)
	    {
	        while((!q.empty()) && a[i] >= a[q.back()])
	        q.pop_back();
	        
	        q.push_back(i);
	    }
	    for(;i<n;i++)
	    {
	        cout << a[q.front()] << " ";
	        while((!q.empty()) && q.front() <= (i-k))
	        q.pop_front();
	        
	        while((!q.empty()) && a[i] >= a[q.back()])
	        q.pop_back();
	        
	        q.push_back(i);
	    }
	    cout << a[q.front()] << " "; 
	    cout << endl;
	}
	return 0;
}
