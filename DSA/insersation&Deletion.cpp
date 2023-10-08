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

void insert(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root->data != NULL)
        prev = root;
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
    struct node *newn = creatnode(key);
    {
        if (key < root->data)
        {
            prev->left = newn;
        }
        else
        {
            prev->right = newn;
        }
    }
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
    struct node *ipre;
    if (root->data == NULL)
    {
        return NULL;
    }
    if (root->left && root->right == NULL)
    {
        free(root);
    }
    if (val > root->data)
    {
        root->left = dlt(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = dlt(root->right, val);
    }
    else
    {
        ipre = i(root);
        root->data = ipre->data;
        root->left = dlt(root->left, ipre->data);
    }
    return root;
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

    cout << " " << endl;

    return 0;
}