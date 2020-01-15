void leftView(Node *root)
{
   // Your code here
   map<int,vector<int>>m;
   int h=0;
   if(root == NULL)
   return;
   queue<Node*>q;
   q.push(root);
  // m[h].push_back()
   while(!q.empty())
   {
   int c=q.size();
   //c=c-(c-1);
   while(c--)
   {
       Node *p=q.front();
      // cout << p->data << " ";
       m[h].push_back(p->data);
       q.pop();
      // while(!q.empty())
   //q.pop();
      // q.pop();
       if(p->left!=NULL)
       {
       q.push(p->left);
       //break;
       }
        if(p->right!=NULL)
       {
       q.push(p->right);
       //break;
       }
       //c=c-(c-1);
   }
   h++;
   }
    map<int,vector<int>>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        cout << it->second.front() << " ";
    }
   
}
