#include <iostream>
#include<boost/multiprecision/cpp_int.hpp>
#include<bits/stdc++.h>
using namespace boost::multiprecision;
using namespace std;
cpp_int fac(cpp_int n)
{
    cpp_int i,r=1;
    for(i=1;i<=n;i++)
    {
        r=r*i;
    }
    return r;
}
int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    cpp_int n;
	    cin >> n;
	    cpp_int k=(cpp_int)(fac(2*n)/(fac(n)*fac(n)));
	    cpp_int z=(cpp_int)(k/(n+1));
	    cout << z << endl;
	}
	return 0;
}
