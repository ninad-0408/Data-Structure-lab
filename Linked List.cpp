#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next = NULL;
} *start = NULL;
int s = 0;

node *newnode()
{
    node *n = new node;
    return n;
}

void createnode()
{
    int r = 0;
    if (s != 0)
    {
        cout << "\nEnter the position of element after which element is to be inserted: ";
        cin >> r;
    }
    if (r < 0 || r > s)
    {
        cout << "\nInvalid input.";
        return;
    }
    node *b = newnode();
    cout << "\nEnter the number to be inserted in linked list: ";
    cin >> b->data;
    node *f = start;
    if (r == 0)
    {
        start = b;
        b->next = f;
    }
    else
    {
        int c = 0;
        while (c < r - 1)
        {
            f = f->next;
            c++;
        }
        node *l = f->next;
        f->next = b;
        b->next = l;
        if (r == s)
            b->next = NULL;
    }
    s++;
}

void display()
{
    node *f = start;
    if (s == 0)
        cout << "\nThe linked list is empty.";
    else
    {
        cout << "\nThe linked list is: ";
        while (f != NULL)
        {
            cout << f->data << "  ";
            f = f->next;
        }
    }
}

void search()
{
    int d, c = 1, u = 0;
    cout << "\nEnter the element to be searched: ";
    cin >> d;
    node *f = start;
    while (f != NULL)
    {
        if (f->data == d)
        {
            cout << "\nThe element " << d << " is at position: " << c;
            u++;
        }
        f = f->next;
        c++;
    }
    if (u == 0)
        cout << "\nThe element does not exsist in linked list.";
}

void delet(int pos)
{
    if (pos > s || pos < 1)
        cout << "\nElement does not exsist.";
    else if (pos != 1)
    {
        node *f = start;
        for (int i = 0; i < pos - 2; i++)
        {
            f = f->next;
        }
        node *p = f;
        f->next = f->next->next;
        delete p;
        s--;
    }
    else
    {
        node *p = start;
        start = start->next;
        s--;
        delete p;
    }
}

void deletem()
{
    int y;
    cout << "\nEnter the element to be deleted: ";
    cin >> y;
    int i = 1, m = 0, p = s, k = 0;
    node *f = start;
    while (f != NULL)
    {
        if (f->data == y)
        {
            delet(i);
            i = 0;
            k++;
        }
        f = f->next;
        i++;
    }
    if (k == 0)
        cout << "\nNo element found.";
}

main()
{
    int t;
    while (1)
    {
        cout << "\nEnter your choice:\n1)To add new element.\n2)To display linked list.\n3)To search a element in linked list.\n4)To delete element.\n5)To delete all data with given value.\n6)To exit.\n";
        cin >> t;
        switch (t)
        {
        case 1:
        {
            createnode();
            break;
        }
        case 2:
        {
            display();
            break;
        }
        case 3:
        {
            search();
            break;
        }
        case 4:
        {
            int pos;
            cout << "\nEnter position of element to be deleted: ";
            cin >> pos;
            delet(pos);
            break;
        }
        case 6:
        {
            return 0;
        }
        case 5:
        {
            deletem();
            break;
        }
        default:
        {
            cout << "\nWrong input.";
            break;
        }
        }
    }
}
