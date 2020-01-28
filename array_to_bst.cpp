#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public :
    int data;
    Node* left;
    Node* right;
};
Node* newNode(int d)
{
    Node *a=new Node();
    a->data=d;
    a->left=NULL;
    a->right=NULL;
    return a;
}
Node* arraytobst(int a[],int s,int e)
{
    if(s>e)
    return NULL;
    int m=(s+e)/2;
   Node *root= newNode(a[m]);
    root->left=arraytobst(a,s,m-1);
    root->right=arraytobst(a,m+1,e);
    return root;
    
}
void preorder(Node* a)
{
    if(a==NULL)
    return;
    cout << a->data << " ";
    preorder(a->left);
    preorder(a->right);
}
int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >>n;
	    int a[n];
	    int i;
	    for(i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	   Node *l= arraytobst(a,0,n-1);
	   preorder(l);
	   cout << endl;
	}
	return 0;
}
