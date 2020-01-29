#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n,i;
	    cin >> n;
	    int c[n];
	    c[0]=1,c[1]=1,c[2]=2;
	    for(i=3;i<=n;i++)
	    {
	        c[i]=c[i-1]+c[i-2]+c[i-3];
	    }
	    cout << c[n] << endl;
	}
	return 0;
}
