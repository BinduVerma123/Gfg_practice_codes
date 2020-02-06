int getLevel(struct Node *node, int target)
{
    int l=0;
	queue<Node*>q;
	q.push(node);
	while(!q.empty())
	{
	     l++;
	    int n=q.size();
	    while(n>0)
	    {
	      Node*t=q.front();
	    
	      q.pop();
	      if(t->data==target)
	      return l;
	    else
	      {
	        if(t->left!=NULL)
	        q.push(t->left);
	        if(t->right!=NULL)
	        q.push(t->right);
	       
	      }
	    n--;
	}
	
}
}
