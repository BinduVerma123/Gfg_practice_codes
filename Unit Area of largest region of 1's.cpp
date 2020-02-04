#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//int n,m;
int n,m;
bool visited[51][51];
int a[51][51];
int DFS(int i,int j,int& c)
{
    int dx[]={-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[]={-1, 0, 1, -1, 1, -1, 0, 1}; 
    int k;
    visited[i][j]=true;
    c++;
    for(k=0;k<8;k++)
    {
        if(i+dx[k]>=0 && i+dx[k] <n && j+dy[k]>=0 && j+dy[k]<m && !visited[i+dx[k]][j+dy[k]])
        {
            if(a[i+dx[k]][j+dy[k]]==1)
            {
                //c++;
            DFS(i+dx[k],j+dy[k],c);
            }
        }
    }
    return c;
    //cout << c << " ";
}
int mm()
{
int c,y=0,i,j;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            
	            if(!visited[i][j] && a[i][j]==1)
	            {
	                c=0;
	                int k=DFS(i,j,c);
	                //cout << k << " ";
	                //c++;
	                if(k>y)
	                y=k;
	            }
	        }
	    }
	    return y;
}
int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    //int n,m;
	    cin >> n >> m;
	   // int a[n][m];
	    int i,j;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            cin >> a[i][j];
	        }
	    }
	    //bool visited[n][m];
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            visited[i][j]=false;
	        }
	    }
	  /*  int c,m=INT_MIN;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            c=0;
	            if(!visited[i][j] && a[i][j]==1)
	            {
	                int k=DFS(i,j,c);
	                //c++;
	               // m=max(m,k);
	            }
	        }
	    }*/
	    int h=mm();
	    cout << h << endl;
	}
	return 0;
}
