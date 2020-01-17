int height(Node* node)
{
    int h;
    if(node == NULL)
    return 0;
    else
    {
        int left=height(node->left);
        int right=height(node->right);
        if(left > right)
        h=1+left;
        else
        h=1+right;
    }
    return h;
}
