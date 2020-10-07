#include <bits/stdc++.h>
#define n 5

using namespace std;

int A[n], B[n];
int top1 = -1, top2 = -1;
int front = -1, rear = -1;

void enqueue();
void dequeue();
void display();

main()
{
    int t;
    while (1)
    {
        cout << "\nEnter your choice:\n1)To insert element in queue.\n2)To delete element from queue.\n3)To display queue.\n4)Exit.\n";
        cin >> t;
        switch (t)
        {
        case 1:
        {
            enqueue();
            break;
        }
        case 2:
        {
            dequeue();
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
            cout << "\n\aInvalid Input!!";
            break;
        }
        }
    }
}

void enqueue()
{
    if (top1 == n - 1)
        cout << "\n\aOverflow!!";
    else
    {
        int t;
        cout << "\nEnter number to be inserted: ";
        cin >> t;
        top1++;
        A[top1] = t;
        if (rear == -1)
        {
            rear = 0;
            front = 0;
        }
        else
        {
            rear++;
            rear = rear % n;
        }
    }
}

void display()
{
    if (top1 == -1)
        cout << "\n\aThe queue doesnot contain any element.";
    else
    {
        for (int i = 0; i <= top1; i++)
            cout << A[i] << "\t";
        cout << "\nPosition of rear is: " << rear;
        cout << "\nPosition of front is: " << front;
    }
}

void dequeue()
{
    if (top1 == -1)
        cout << "\nUnderflow!!";
    else
    {
        while (top1 > 0)
        {
            top2++;
            B[top2] = A[top1];
            top1--;
        }
        top1--;
        while (top2 >= 0)
        {
            top1++;
            A[top1] = B[top2];
            top2--;
        }
        front++;
        front = front % n;
    }
}
