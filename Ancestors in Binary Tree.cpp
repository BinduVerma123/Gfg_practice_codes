bool p(struct Node *root, int target)
{
    if(root==NULL)
    return false;
    if(root->data == target)
    return true;
    if(p(root->left,target) || p(root->right,target))
    {
        cout << root->data << " ";
        return true;
    }
    return false;
     // Code here
}
bool printAncestors(struct Node*root,int target)
{
    bool a=p(root,target);
    cout << endl;
}
