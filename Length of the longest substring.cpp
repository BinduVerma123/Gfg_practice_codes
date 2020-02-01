#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	    cin >> s;
	    int i=0,j=0;
	    set<char>q;
	    set<char>::iterator it;
	    int m=0;
	    while(j<s.length())
	    {
	        it=q.find(s[j]);
	        if(it==q.end())
	        {
	           q.insert(s[j]);
	           j++;
	           m=max(m,j-i);
	        }
	        else
	        {
	          q.erase(s[i]);
	          i++;
	        }
	    }
	    cout << m << endl;
	    
	}

	
	return 0;
}
