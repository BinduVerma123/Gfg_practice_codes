#include <iostream>
using namespace std;
#define B 16
unsigned short int rightrotate(int m,unsigned int n)
{
    return ((m>>n)|(m<< (B-n)));
}
unsigned short int leftrotate( int m,unsigned int n)
{
    return ((m<<n)|(m >> (B-n)));
}
int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    unsigned short int m,n;
	     
	    cin >> m >> n;
	    n=n%16;
	    //k=m,l=n;
	  cout << leftrotate(m,n) << endl;
	  cout << rightrotate(m,n) << endl;
	}
	return 0;
}
