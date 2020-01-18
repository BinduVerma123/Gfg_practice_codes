bool DFS(int v,vector<int> adj[],bool visited[],bool rec[])
{
    if(visited[v]==false)
    {
    visited[v]=true;
    rec[v]=true;
    
    vector<int>::iterator it;
    for(it=adj[v].begin();it!=adj[v].end();it++)
    {
        if(!visited[*it] && DFS(*it,adj,visited,rec))
        {
        //DFS(*it,adj,visited,rec);
        return true;
        }
        else if(rec[*it])
        return true;
    }
    }
    rec[v]=false;
    return false;
}
bool isCyclic(int V, vector<int> adj[])
{
    // Your code here
    bool *visited=new bool[V];
    bool *rec=new bool[V];
    int i;
    for(i=0;i<V;i++)
    {
        visited[i]=false;
        rec[i]=false;
    }
        for(i=0;i<V;i++)
        {
            if(DFS(i,adj,visited,rec))
            return true;
            
        }
        return false;
}
