#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    unsigned int x;
	    cin >> x;
	    cout << (((x & 0xAAAAAAAA) >> 1) | ((x & 0x55555555) << 1))<<endl;
	}
	return 0;
}
