#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n,t,c=0,i;
	    cin >> n;
	    for(i=1;i<=n;i++)
	    {
	        t=i;
	        while(t)
	        {
	            c=c+(t&1);
	            t=t>>1;
	        }
	    }
	    cout << c << endl;
	}
	return 0;
}
