#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct cell
{
    int x,y;
    int d;
    cell(){}
    cell(int x,int y,int d):x(x),y(y),d(d){}
};
int main() {
	//code 
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	   // int a[n][n];
	   int k1,k2,t1,t2;
	   cin >> k1 >> k2;
	   cin >> t1 >> t2;
	    int i,j;
	    bool visited[n+1][n+1];
	    for(i=1;i<=n;i++)
	    {
	        for(j=1;j<=n;j++)
	        {
	            visited[i][j]=false;
	        }
	    }
	    queue<cell>q;
	    //q.push()
	    int dx[]={-2,-2,-1,-1,2,2,1,1};
	    int dy[]={-1,1,2,-2,-1,1,-2,2};
	    q.push(cell(k1,k2,0));
	    int x,y;
	    while(!q.empty())
	    {
	        cell tt=q.front();
	        q.pop();
	        visited[tt.x][tt.y]=true;
	        if(tt.x == t1 && tt.y ==t2)
	        {
	        cout << tt.d << endl;
	        break;
	        }
	        for(i=0;i<8;i++)
	        {
	           x=tt.x + dx[i];
	           y=tt.y + dy[i];
	           if(x >=1 && x <=n && y>=1 && y<=n && !visited[x][y])
	           {
	               visited[x][y]=true;
	               q.push(cell(x,y,tt.d+1));
	               
	           }
	        }
	    }
	    
	}
	return 0;
}
