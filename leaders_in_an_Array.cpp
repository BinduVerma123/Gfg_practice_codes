#include <iostream>
#include <vector>
using namespace std;

int main() {
	//code
	int t,k;
	cin >>t;
	for(k=0;k<t;k++)
	{
	long int n;
	cin >>n;
	long int a[n];
	int i,j;
	for(i=0;i<n;i++)
	{
	    cin >>a[i];
	}
	vector<int>b;
	b.push_back(a[n-1]);
	int max=a[n-1];
	//cout << max << " ";
	for(i=n-2;i>=0;i--)
	{
	    if(a[i] >= max)
	    {
	        max=a[i];
	        //cout << max << " ";
	        b.push_back(max);
	    }
	}
/*	vector<int>b;
	b.push_back(a[n-1]);
	//int k=0;
	//b[k]=a[n-1];
//	k++;
	for(i=n-1-1;i>=0;i--)
	{int c=0;
	    for(j=i+1;j<n;j++)
	    {
	        if(a[i]>=a[j])
	        c++;
	        //continue;
	        //else
	       // b[k]=a[i+1];
	    }
	    if(c>=n-1-i)
	    {
	   // b[k]=a[i];
	   // k++;
	   b.push_back(a[i]);
	    }
	}*/
for	(i=b.size()-1;i>=0;i--)
{
	    cout << b[i] << " ";
	}
/*	for(i=0;i<k;i++)
	{
	    cout << b[i] << " ";
	}*/
	cout << endl;
	}
	return 0;
}
