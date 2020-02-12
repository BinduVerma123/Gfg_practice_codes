int getCountOfNode(Node *root, int l, int h)
{
  // your code goes here 
  if(root == NULL)
  return 0;
  if(root->data ==h && root->data == l)
  return 1;
  if(root->data <= h && root->data >=l)
  return 1 + getCountOfNode(root->left,l,h) + getCountOfNode(root->right,l,h);
  else if(root->data < l)
  return getCountOfNode(root->right,l,h);
  else
  return getCountOfNode(root->left,l,h);
}
