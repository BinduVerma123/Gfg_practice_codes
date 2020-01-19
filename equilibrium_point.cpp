#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        long int n,i,l,s=0,f;
        cin >> n;
        long int a[n];
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        l=0,f=0;
        for(i=0;i<n;i++)
        {
            s=s+a[i];
        }
        for(i=0;i<n;i++)
        {
            s=s-a[i];
            if(l==s)
            {
            cout << i+1 << endl;
            f=1;
            break;
            }
            else
            l=l+a[i];
        }
        if(f==0)
        cout << -1 << endl;
        //cout << endl;
    }
	//code
	return 0;
}
