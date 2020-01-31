#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct abhi
{
    int x,y;
    int d;
    abhi(){}
    abhi(int x,int y,int d):x(x),y(y),d(d){}
};
int main() {
	//codes
	int t;
	cin >> t;
	while(t--)
	{
	    int n,m,x,y;
	    cin >> n >>m;
	    int s1,s2,d1,d2;
	    cin >> s1 >> s2 >> d1 >> d2;
	    int i,j;
	    bool visited[n][m];
	    for(i=1;i<=n;i++)
	    {
	        for(j=1;j<=m;j++)
	        {
	            visited[i][j]=false;
	        }
	    }
	    int dx[]={-2,-2,-1,-1,1,1,2,2};
	    int dy[]={1,-1,2,-2,-2,2,1,-1};
	    queue<abhi>q;
	    q.push(abhi(s1,s2,0));
	    int f=0;
	    while(!q.empty())
	    {
	      abhi bb=q.front();
	      visited[bb.x][bb.y]=true;
	      q.pop();
	      if(bb.x==d1 && bb.y==d2)
	          {
	          cout << bb.d << endl;
	          f=1;
	          break;
	          }
	      for(i=0;i<8;i++)
	      {
	          x=bb.x+dx[i];
	          y=bb.y+dy[i];
	          
	          if(x>=1 && x<=n && y>=1 && y<=m && !visited[x][y])
	          {
	              visited[x][y]=true;
	            q.push(abhi(x,y,bb.d+1));
	            
	          }
	      }
	    }
	    if(f==0)
	    cout << -1 << endl;
	}
	return 0;
}
