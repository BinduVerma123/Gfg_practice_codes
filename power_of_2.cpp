#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    long long int n;
	    cin >>n;
	    if(n==0)
	    cout << "NO" << endl;
	   else if(ceil(log2(n))==floor(log2(n)))
	    cout << "YES" << endl;
	    else
	    cout << "NO" << endl;
	}
	return 0;
}
