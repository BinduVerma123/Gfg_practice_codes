struct node *reverse (struct node *head, int k)
{ 
    node* current =head;
    node* prev=NULL;
    node* cnext=NULL;
    int c=0;
    while(current!=NULL && c<k)
    {
        cnext=current->next;
        current->next=prev;
        prev=current;
        current=cnext;
        c++;
    }
    if(cnext!=NULL)
    head->next=reverse(cnext,k);
    
    return prev;
}
