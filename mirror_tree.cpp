void mirror(Node* node) 
{
     // Your Code Here
     Node *temp;
     if(node == NULL)
     return;
     else
     {
         mirror(node->left);
         mirror(node->right);
         temp=node->left;
         node->left=node->right;
         node->right=temp;
     }
}
