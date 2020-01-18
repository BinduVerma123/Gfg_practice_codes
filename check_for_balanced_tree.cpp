int height(Node*root)
{
    if(root==NULL)
    return 0;
    else
    {
        int j=height(root->left);
        int k=height(root->right);
        if(j>k)
        return j+1;
        else
        return k+1;
    }
}
bool isBalanced(Node *root)
{
    //  Your Code here
    if(root==NULL)
    return true;;
   // bool a=0;
   // int f=0;
    int l=height(root->left);
    int r=height(root->right);
  // cout << l << " " << r << endl;
    if(abs(l-r) <=1 && isBalanced(root->left) && isBalanced(root->right))
    {
    //f=1;
    return true;
    }
    else 
    return false;
}
