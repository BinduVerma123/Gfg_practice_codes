#include <iostream>
#include<bits/stdc++.h>
using namespace std;
/*long long int fib(int n,int m)
{
    int i,j;
    long long int a[n];
    a[0]=1,a[1]=1;
    for(i=2;i<n;i++)
    {
        a[i]=0;
        for(j=1;j<=m && j<=i;j++)
        {
            a[i]=a[i]+a[i-j];
        }
    }
    return a[n-1];
}*/

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n,i;
        cin >> n;
        
        long long int a[n];
        a[0]=1,a[1]=1;
        for(i=2;i<=n;i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
        cout << a[n] << endl;
    }
	//code
	return 0;
}
