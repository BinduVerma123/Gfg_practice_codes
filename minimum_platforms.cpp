#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >>n;
        int a[n],b[n];
        int i;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(i=0;i<n;i++)
        {
            cin >> b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        int k=1,j=0,p=1,r=1;
        while(j<n && k <n)
        {
            if(a[k] <= b[j])
            {
            p++;
            k++;
            
            if(p>r)
            r=p;
            }
            else{
                p--;
                j++;
            }
        }
        cout << r << endl;
    }
    
	//code
	return 0;
}
