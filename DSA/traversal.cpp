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
void preorder(struct node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
    }
    else
    {
        return 1;
    }
    prev = root;
    return isBST(root->right);
}
struct node *search(struct node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (key == root->data)
    {
        return root;
    }
    if (key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}
struct node *iterative(struct node *root, int key)
{
    while (root != NULL)
    {
        if (root == NULL)
        {
            return NULL;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
}
struct node *i(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
struct node *dlt(struct node *root, int val)
{
    struct node *a;
    if (root->data == NULL)
    {
        return NULL;
    }
    if (root->left && root->right == NULL)
    {
        free(root);
    }
    if (val < root->data)
    {
        root->left = dlt(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = dlt(root->right, val);
    }
    else
    {
        a = i(root);
        root->data = a->data;
        root->left = dlt(root->left, a->data);
    }
    return root;
}
void insert(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root->data != NULL)
    {
        root = prev;
        if (root->data == key)
        {
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct node *n = creatnode(key);
    {
        if (key < root->data)
        {
            prev->left = n;
        }
        else
        {
            prev->right = n;
        }
    }
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
    struct node *n = iterative(p, 3);
    if (n != NULL)
    {
        cout << "found"
             << " " << n->data;
    }
    else
    {
        cout << " nikal bkl";
    }

    return 0;
}