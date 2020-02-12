void DFS(int i,int j,vector<int> A[], int N, int M,vector<vector<bool>> &visited)
{
    visited[i][j]=true;
    int dx[]={-1,-1,1,1, -1, 1,0,0};
    int dy[]={1 ,0,1,0 ,-1 ,-1,1,-1};
    int k;
    for(k=0;k<8;k++)
    {
        if(i+dx[k]>=0 && i+dx[k] <N && j+dy[k]>=0 && j+dy[k]<M && !visited[i+dx[k]][j+dy[k]])
        {
            if(A[i+dx[k]][j+dy[k]]==1)
            DFS(i+dx[k],j+dy[k],A,N,M,visited);
        }
    }
    
}
int findIslands(vector<int> A[], int N, int M)
{
    vector<vector<bool>> visited(N, vector<bool>(M, false));    // Created a visited array intially all false(unvisited)
    int i,j;
    int c=0;
    
    /*for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            visited[i][j]=false;
        }
    }*/
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            if(!visited[i][j] && A[i][j] == 1)
            {
                DFS(i,j,A,N,M,visited);
                c++;
            }
        }
    }
    return c;
    // Your code here
    
}
