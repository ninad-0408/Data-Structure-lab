#include <bits/stdc++.h>

using namespace std;

struct node
{
	node *left = 0;
	int data;
	node *right = 0;
};
node *ro = 0;
node *cnode()
{
	node *r = new node;
	return r;
}

void fillnode(node **root)
{
	*root = cnode();
	cout << "Enter data in node: ";
	cin >> (*root)->data;
	int y = 1;
	do
	{
		cout << "Enter your choice:\n1)To add both left and right children to this node\n2)To add left child only\n3)To add right child only\n4)To add no children.\n";
		cin >> y;
		switch (y)
		{
		case 1:
		{
			cout << "\nFor left child:\n";
			fillnode(&((*root)->left));
			cout << "\nFor right child:\n";
			fillnode(&((*root)->right));
			y = 0;
			break;
		}
		case 2:
		{
			cout << "\nFor left child:\n";
			fillnode(&((*root)->left));
			(*root)->right = 0;
			y = 0;
			break;
		}
		case 3:
		{
			cout << "\nFor right child:\n";
			fillnode(&((*root)->right));
			(*root)->left = 0;
			y = 0;
			break;
		}
		case 4:
		{
			(*root)->left = 0;
			(*root)->right = 0;
			y = 0;
			return;
			break;
		}
		default:
		{
			cout << "\nWrong Input\n";
			y = 0;
			break;
		}
		}
	} while (y);
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
	fillnode(&ro);
	predisplay(ro);
	cout << endl;
	indisplay(ro);
	cout << endl;
	postdisplay(ro);
	cout << endl;
}
