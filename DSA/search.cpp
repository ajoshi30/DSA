#include<iostream>
#include<malloc.h>
using namespace std;
struct node 
{
    int data;
    struct node *right;
    struct node *left;
};
struct node *creat(int data)
{
    struct node *n=(struct node*)malloc(sizeof(struct node));
    n->left=NULL;
    n->right=NULL;
    return n;
}

void inordr(struct node *root,int data)
{
    while(root->data !=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
struct node *search(struct node *root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==key)
    {
        return root;
    }
    else if(key<root->data)
    {
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}
int main()
{
    struct node *p=creat(2);
    struct node *p1=creat(3);
    struct node *p2=creat(4);
    struct node *p3=creat(5);
    struct node *p4=creat(6);
    p->right=p1;
    p->left=p2;
    p1->right=p3;
    p1->left=p4;
}