#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >>t;
	while(t--)
	{
	long int n,d;
	int i;
	//cin >>t;
	cin >>n >> d;
	long int a[n],b[n];
	for(int i=0;i<n;i++)
	{
	  cin >> a[i];  
	}
	int j=0;
	for(i=d;i<n;i++)
	{
	    b[j]=a[i];
	    j++;
	}
	for(i=0;i<d;i++)
	{
	    b[j]=a[i];
	    j++;
	}
	for(i=0;i<j;i++)
	{
	    cout << b[i] << " ";
	}
	cout << endl;
	}
	return 0;
}
