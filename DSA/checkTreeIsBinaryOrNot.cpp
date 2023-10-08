#include <iostream>
#include <malloc.h>
using namespace std;
struct node
{
    int data;
    struct node *right;
    struct node *left;
};
struct node *creatnode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->right = NULL;
    n->left = NULL;
    return n;
}
// searching an element
struct node *search(struct node *root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(key==root->data)
    {
        return root;
    }
    if(key< root->data)
    {
        return search(root->left,key);
    }
    else
    {
        return search(root->right,key);
    }
}
// check if binary tree or not
int isBST(struct node *root)
{
    struct node *prev=NULL;
    if(root!=NULL)
    {
        if(!isBST(root->left))
        {
            return 0;
        }
        if(prev !=NULL && root->data <= prev->data)
        {
            return 0;
        }
    }
    else
    {
        return 1;
    }
    prev =root;
    return isBST(root->right);
}
int main()
{
    struct node *p = creatnode(5);
    struct node *p1 = creatnode(3);
    struct node *p2 = creatnode(6);
    struct node *p3 = creatnode(1);
    struct node *p4 = creatnode(4);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    struct node *n=search(p, 4);
    if(n!= NULL)
    {
        cout<<" found"<<" "<<n->data;
    }
    else
    {
        cout<<" nikal bkl";
    }
    cout<<isBST(p)<<" ";
    return 0;
}