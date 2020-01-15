Node* reverseList(Node *head)
{
    Node*p=head;
    Node *prev=NULL,*next=NULL;
    if(p==NULL)
    return NULL;
    else if(p->next==NULL)
    return head;
    else
    {
        while(p!=NULL)
        {
          next=p->next;
          p->next=prev;
          prev=p;
          p=next;
        }
        head=prev;
    }
    return head;
}
