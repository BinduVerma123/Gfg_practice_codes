void removeloop(Node *p,Node *head)
{
    Node *q=p;
    Node *t=head;
    while(t->next!=q->next)
    {
        t=t->next;
        q=q->next;
    }
    
    q->next=NULL;
}
void removeTheLoop(Node *head)
{
     //Your code here
     Node*p=head;
     Node* q=head;
     while(p!=NULL && q!=NULL && q->next!=NULL)
     {
         p=p->next;
         q=q->next->next;
         if(p==q)
         removeloop(p,head);
     }
}
