#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        while(n>0)
        {
            if((n&1) == 0)
            {
            cout << "NO" << endl;
            break;
            }
            n= n >> 1;
            
        }
        if(n==0)
        cout << "YES" << endl;
    }
	//code
	return 0;
}
