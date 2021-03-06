#include <bits/stdc++.h>

using namespace std;

int s = 0;

struct node
{
    int data;
    node *next;
};

node *start;

node *create()
{
    node *t = new node();
    return t;
}

void addnode()
{
    node *n = create();
    int y = 0;
    if (s != 0)
    {
        cout << "Enter the position of element after which element is to be added: ";
        cin >> y;
        if (y < 0 || y > s)
        {
            cout << "\nEntered position is wrong.";
            return;
        }
    }
    cout << "Enter the data to be added to node: ";
    cin >> n->data;
    if (s == 0)
    {
        start = n;
        n->next = start;
        s++;
        return;
    }
    node *f = start;
    for (int i = 0; i < y - 1; i++)
        f = f->next;
    n->next = f->next;
    f->next = n;
    s++;
}

void dele()
{
    int y;
    if (s == 0)
    {
        cout << "There is no element to delete.";
        return;
    }
    cout << "Enter the position of element to be deleted: ";
    cin >> y;
    if (y <= 0 || y > s)
    {
        cout << "The given position doesnot exsists.\n";
        return;
    }
    node *f = start;
    for (int i = 1; i < y; i++)
        f = f->next;
    node *d = f;
    f = f->next;
    if (y == 1)
        start = f;
    cout << "\nThe deleted element is: " << d->data << ".\n";
    s--;
    delete d;
}

void display()
{
    if (s == 0)
    {
        cout << "The linked list is empty.";
        return;
    }
    node *f = start;
    cout << "\nThe linked list is: ";
    for (int i = 0; i < s; i++)
    {
        cout << f->data << "\t";
        f = f->next;
    }
}

main()
{
    int y;
    while (1)
    {
        cout << "\nEnter your choice:\n1)To enter element.\n2)To delete element.\n3)To display elements.\n4)TO exit.\n";
        cin >> y;
        switch (y)
        {
        case 1:
        {
            addnode();
            break;
        }
        case 2:
        {
            dele();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            return 0;
        }
        default:
        {
            cout << "Invalid Input.\n";
            break;
        }
        }
    }
}
