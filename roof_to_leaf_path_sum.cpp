bool hasPathSum(Node *node, int sum)
{
   //Your code here
   int s;
   s=sum-node->data;
    bool a=0;
   if(s==0 && node->right==NULL && node->left==NULL)
   return true;
   else
   {
      
   if(node->left)
      a=a|| hasPathSum(node->left,s);
      if(node->right)
       a=a||hasPathSum(node->right,s);
   }
   return a;
}
