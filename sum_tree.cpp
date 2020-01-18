int add(Node* root)
{
    int s;
    if(root == NULL)
    return 0;
    s=root->data + add(root->left)+add(root->right);
    return s;
    
}
bool isSumTree(Node* root)
{
     // Your code here
     if(root==NULL)
     return true;
     if(root->left==NULL && root->right==NULL)
     return true;
     int  l=add(root->left);
     int r=add(root->right);
     if(root->data == l+r && isSumTree(root->left) && isSumTree(root->right))
     return true;
     else
     return false;
}
