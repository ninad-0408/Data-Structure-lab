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

void mapnodes(int *A, int i, node **s)
{
    if (A[i] > (*s)->data)
    {
        if (((*s)->left) != 0)
        {
            mapnodes(A, i, &((*s)->left));
        }
        else
        {
            (*s)->left = cnode();
            ((*s)->left)->data = A[i];
            return;
        }
    }
    else
    {
        if (((*s)->right) != 0)
        {
            mapnodes(A, i, &((*s)->right));
        }
        else
        {
            (*s)->right = cnode();
            ((*s)->right)->data = A[i];
            return;
        }
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
    ro = cnode();
    (ro)->data = A[0];
    for (int i = 1; i < n; i++)
        mapnodes(A, i, &ro);
    predisplay(ro);
    cout << "\n";
    postdisplay(ro);
    cout << "\n";
    indisplay(ro);
}
