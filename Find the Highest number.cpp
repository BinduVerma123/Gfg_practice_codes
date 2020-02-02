#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int high(int a[],int low,int highs)
{
    int mid=(low+highs)/2;
    if(low==highs)
    return a[low];
    if(highs==low+1 && a[low]<a[highs])
    return a[highs];
    if(highs==low+1 && a[low]>a[highs])
    return a[low];
         if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
        return a[mid];
        if(a[mid]>a[mid-1] && a[mid]<a[mid+1])
        return high(a,mid+1,highs);
        //if(a[mid]>a[mid+1] && a[mid]<a[mid-1])
        else
        return high(a,low,mid-1);
    
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int a[n];
	    int i;
	    for(i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    cout << high(a,0,n-1) << endl;
	}
	return 0;
}
