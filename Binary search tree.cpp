#include <bits/stdc++.h>

using namespace std;

struct node
{
    node *left = 0;
    int data;
    node *right;
} *ro = 0;

node *cnode()
{
    node *r = new node;
    return r;
}

void mapnodes(int *A, int i = 0)
{
    if (i == 0)
    {
        ro = cnode();
        ro->data = A[0];
    }
    node *s = ro;
    while (1)
    {
        if (s->data >= A[i] && s->left == 0)
        {
            s->left = cnode();
            s->left->data = A[i];
            break;
        }
        else if (s->data < A[i] && s->right == 0)
        {
            s->right = cnode();
            s->right->data = A[i];
            break;
        }
        else if (s->data >= A[i])
            s = s->left;
        else if (s->data < A[i])
            s = s->right;
    }
}

void predisplay(node *root)
{
    if (root == 0)
        return;
    cout << root->data;
    predisplay(root->left);
    predisplay(root->right);
}

void postdisplay(node *root)
{
    if (root == 0)
        return;
    postdisplay(root->left);
    postdisplay(root->right);
    cout << root->data;
}

void indisplay(node *root)
{
    if (root == 0)
        return;
    indisplay(root->left);
    cout << root->data;
    indisplay(root->right);
}

main()
{
    cout << "Enter the number of elements of Binery search tree: ";
    int n;
    cin >> n;
    int A[n];
    cout << "Enter elements to be inserted from left to right: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
        mapnodes(A, i);
    predisplay(ro);
    postdisplay(ro);
    indisplay(ro);
}
