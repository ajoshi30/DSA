#include<iostream>
#include<malloc.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *creat(int data)
{
    struct node *n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void preorder(struct node *root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
void insert(struct node *root,int key)
{
    struct node *prev=NULL;
    while(root->data!=NULL)
    prev=root;
    if(key==tooy->data)
    {
        return;
    }
    else if(key<root->data)
    {
        root=root->left;
    }
    else{
        root=root->right;
    }
    struct node *n=creat(key);
    if(key<root->data)
    {
        prev->left=n;
    }
    else
    {
        prev->right=n;
    }
}

int main()
{
    struct node *p=creat(78);
    struct node *p1=creat(22);
        struct node *p2=creat(56);
struct node *p3=creat(12);
p->left=p1;
p->right=p2;
p1->left=p3;
/*
preorder(p);
cout<<" "<<endl;
postorder(p);
cout<<" "<<endl;
inorder(p);
cout<<" "<<endl;
*/
insert(p,21);
cout<<p->right->right->data<<" ";
return 0;
}