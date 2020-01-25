#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isTriplet(int a[],int n)
{
    int i;
  for(i=0;i<n;i++)
        {
            a[i]=(a[i]*a[i]);
        }
        sort(a,a+n);
        int c=0;
        for(i=n-1;i>=2;i--)
        {
          int l=0;
          int r=i-1;
          while(l<r)
          {
              if(a[l]+a[r]==a[i])
              {
              return true;
              //break;
              }
              (a[l]+a[r] < a[i] ) ? l++:r--;
              
          }
        }
        return false;
}

int main() {
    int t,k;
    cin >> t;
    for(k=0;k<t;k++)
    {
        long int n,i;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        isTriplet(a,n) ? cout << "Yes":cout << "No";
        cout << endl;
    }
	//code
	return 0;
}
