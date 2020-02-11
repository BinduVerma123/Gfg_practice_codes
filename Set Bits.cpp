#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    long int n;
	    cin >> n;
	    int c=0;
	    while(n)
	    {
	      c=c+(n&1);
	      n=n>>1;
	    }
	    cout << c << endl;
	}
	return 0;
}
