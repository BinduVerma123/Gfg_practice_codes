#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        long int n,i;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(i=0;i<n-1;i++)
        {
            if(a[i] > a[i+1])
            cout << a[i+1] << " ";
            else 
            cout << -1 << " ";
            
        }
        cout << -1 << " ";
        cout << endl;
    }
	//code
	return 0;
}
