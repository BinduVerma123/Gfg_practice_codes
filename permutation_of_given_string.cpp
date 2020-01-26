#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void permute(string s,bool val)
{
    bool n=val;
    if(n==true)
    cout << s << " ";
    if(n==false)
    return;
    n=next_permutation(s.begin(),s.end());
    permute(s,n);
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	    cin >> s;
	    bool val=true;
	    sort(s.begin(),s.end());
	    permute(s,val);
	    cout << endl;
	}
	return 0;
}
