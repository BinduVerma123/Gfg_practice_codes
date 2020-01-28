#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        string s,s2;
        cin >> s >> s2;
        int i,f=0;
        int n=s.length();
        int n1=s2.length();
        if(n!=n1)
        {f=1;
        cout << "NO" << endl;
        }
        else 
        {
       // map<string,int>mp;
       sort(s.begin(),s.end());
       sort(s2.begin(),s2.end());
        for(i=0;i<n;i++)
        {
          if(s[i]!=s2[i])
          {
              f=1;
          cout << "NO" << endl;
          break;
          }
        }
        if(f==0)
        cout << "YES" << endl;
        }
       // return 0;
        
    }
	//code
	return 0;
}
