int detectloop(Node *head) {
    Node *p=head;
    Node *q=head;
    while(p!=NULL && q!=NULL && q->next!=NULL)
    {
        p=p->next;
        q=q->next->next;
        if(p==q)
        return 1;
    }
    return 0;
    
}
