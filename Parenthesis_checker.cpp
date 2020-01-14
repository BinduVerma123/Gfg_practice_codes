#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool abhi(string a)
{
    stack<char>s;
    int i;
    char x;
  for(i=0;i<a.length();i++)
        {
           if(a[i] == '(' || a[i] == '{' || a[i] == '[' )
            {
             s.push(a[i]);
             continue;
            }
           if(s.empty())
           {
           //f=1;
           //cout << "unbalanced" << endl;
          // break;
          return false;
           }
           switch (a[i])
           {
               case ')':x=s.top();
                        s.pop();
                        if(x == '{' || x == '[')
                        {
                        return false;
                        }
                        break;
                case ']':x=s.top();
                         s.pop();
                         if(x == '(' || x == '{')
                         {
                         return false;
                         }
                         break;
             case '}':x=s.top();
                        s.pop();
                        if(x == '(' || x == '[')
                       { 
                           return false;
                       }
                       break;
           }
        }
          if(s.empty())
          return true;
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
       // stack<char> s;
        string a;
        cin >> a;
        if(abhi(a))
           cout << "balanced" << endl;
           
        else
        cout << "not balanced" << endl;
    }
	//code
	return 0;
}
