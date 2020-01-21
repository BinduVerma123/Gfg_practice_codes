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
        int a[n];
        int i,l=n/2,f=0;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
            
        }
        map<int,int>m;
        for(i=0;i<n;i++)
        {
            m[a[i]]++;
        }
        /*for(i=0;i<m.size();i++)
        {
            
            cout << .first << endl;
            
        }*/
        for(auto i:m)
        {
            if(i.second>l)
            {
                f=1;
            cout << i.first << endl;
            break;
            }
        }
        if(f==0)
        cout << -1 << endl;
    }
	//code
	return 0;
}
