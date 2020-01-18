void levelOrder(Node* node)
{
  //Your code hereque
  queue<Node *>q;
  if(node == NULL)
  return;
  else
  q.push(node);
  while(!q.empty())
  {
      Node * l = q.front();
      cout << l->data << " ";
      q.pop();
      if(l->left!=NULL)
      q.push(l->left);
      if(l->right!=NULL)
      q.push(l->right);
  }
}
