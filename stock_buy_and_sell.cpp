#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int bin(int start,int end,int a[])
{
    int mid=(start+end)/2; 
   // cout << mid << " ";
    if(start==end)
    return start;
   if(end==start+1 && a[end] > a[start])
   return end;
   if(end==start+1 && a[end] < a[start])
   return start;
    if(a[mid]>a[mid+1] && a[mid]>a[mid-1])
    return mid;
    if(a[mid]>a[mid-1] && a[mid]<a[mid+1])
    return bin(mid+1,end,a);
    else
    return bin(start,mid-1,a);
}

int main() {
	//code
	int t,n;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    int a[n],m[n/2],c[n/2],l=0,k=0;
	    int i,j;
	    for(i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    for(i=0;i<n-1;i++)
	    {
	        //cout << i << " ";
	        if(a[i] < a[i+1] && i-1 <0)
	        {
	        c[k]=i;
	        k++;
	        }
	       else if(a[i] < a[i+1] && a[i] < a[i-1])
	        {
	        c[k]=i;
	        k++;
	        }
	    }
	    for(i=1;i<n;i++)
	    {
	        if(a[i]>a[i-1] && i==n-1 )
	        {
	            m[l]=i;
	            l++;
	        }
	        if(a[i]>a[i+1] && a[i]>a[i-1])
	        {
	            m[l]=i;
	            l++;
	        }
	    }
	    if(k==0 || l==0)
	    {
	        cout << "No Profit" ;
	    }
	    else
	    {
	    for(i=0,j=0; i<l,j<k;j++,i++)
	    {
	        cout << "(" << c[j] << " "<< m[i] << ")" << " ";
	    }
	    }
	    cout << endl;
	}
	return 0;
}
