bool isbst(Node* root,int min,int max)
{
    if(root == NULL)
    return true;
    if(root->data <= min || root->data > max)
    return false;
    else
    return isbst(root->left,min,root->data) && isbst(root->right,root->data,max);
}
bool isBST(Node* root) {
    isbst(root,INT_MIN,INT_MAX);
   
}
