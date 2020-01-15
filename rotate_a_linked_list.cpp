Node* rotate(Node* head, int k) {
    Node *p=head;
    Node *q;
    int m=1;
    while(m<k &&p!=NULL)
    {
        p=p->next;
        m++;
        //if(m==k)
       // break;
    }
    if(p==NULL)
    return head;
    q=p;
    
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=head;
    head=q->next;
    q->next=NULL;
    return head;
    
}
