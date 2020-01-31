#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int l[s.length()];
        int i=1,j=0;
        l[0]=0;
        while(i<s.length())
        {
            if(s[i]==s[j])
            {
            j++;
            l[i]=j;
            i++;
            }
            else
            {
                if(j!=0)
                {
                j=l[j-1];
                }
                else
                {
                    l[i]=0;
                    i++;
                }
            }
        }
       /* for(i=0;i<s.length();i++)
        {
            cout << l[i];
        }*/
        //int k=*max_element(l,l+s.length());
        cout << l[s.length()-1] << endl;
    }
	//code
	return 0;
}
