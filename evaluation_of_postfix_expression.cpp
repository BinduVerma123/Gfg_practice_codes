#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    string a;
	    cin >> a;
	    int i,y;
	    int n=a.length();
	    stack<int>s;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>='0' && a[i]<='9')
	        s.push(a[i]-'0');
	        else
	        {
	            int m=(int)s.top();
	            s.pop();
	            int n=(int)s.top();
	            s.pop();
	            switch(a[i])
	            {
	                case '*':y=n*m;
	                         s.push(y);
	                         break;
	                 case '/':y=n/m;
	                         s.push(y);
	                         break;
	                 case '+':y=n+m;
	                         s.push(y);
	                         break; 
	                 case '-':y=n-m;
	                         s.push(y);
	                         break;        
	            }
	        }
	    }
	    cout << s.top() << endl;
	}
	return 0;
}
