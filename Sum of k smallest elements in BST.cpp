#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    
};
node* newnode(int x)
{
    node* t=new node();
    t->data=x;
    t->right=NULL;
    t->left=NULL;
    return t;
}
void inorder(node *l)
{if(l->left)
    inorder(l->left);
    cout << l->data << " ";
    if(l->right)
    inorder(l->right);
}
void insert(node **p,int x)
{
    if(*p==NULL)
    *p=newnode(x);
    else if((*p)->data<x)
    insert(&((*p)->right),x);
    else if((*p)->data>x)
    insert(&((*p)->left),x);
    
}
node* make(int a[],int n)
{
    node* y=NULL;
    int i;
  //  y=newnode(a[0]);
    for(i=0;i<n;i++)
    {
      insert(&y,a[i]);
    }
    return y;
}
int sum(node* j,int k,int &c)
{
   //int c=0;
   if(j==NULL)
   return 0;
   if(c>k)
   return 0;
  int s=sum(j->left,k,c);
  if(c>=k)
  return s;
   s=s+j->data;
   c++;
   if(c>=k)
   return s;
   return s+sum(j->right,k,c);
   
}
int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int a[n],i;
	    for(i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    int e;
	    cin >> e;
	    node * k=make(a,n);
	   // inorder(k);
	    int c=0;
	    int l=sum(k,e,c);
	    cout << l << endl;
	}
	return 0;
}
