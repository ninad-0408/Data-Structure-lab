#include <bits/stdc++.h>
#define n 10

using namespace std;

int A[n], s = 0;
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
    if (s == n)
        cout << "\nOverflow!!";
    else
    {
        int t;
        cout << "\nEnter 1 to enqueue from rear end and 2 for front end: ";
        cin >> t;
        int m;
        cout << "\nEnter the element to be inserted: ";
        cin >> m;
        if (t == 1)
        {
            if (rear == -1)
            {
                front = 0;
                rear = 0;
                A[rear] = m;
                s++;
            }
            else
            {
                rear++;
                rear = rear % n;
                A[rear] = m;
                s++;
            }
        }
        else if (t == 2)
        {
            if (front == -1)
            {
                rear = n - 1;
                front = n - 1;
                A[front] = m;
                s++;
            }
            else if (front == 0)
            {
                front = n - 1;
                A[front] = m;
                s++;
            }
            else
            {
                front--;
                A[front] = m;
                s++;
            }
        }
    }
}

void dequeue()
{
    if (s == 0)
        cout << "\nUnderflow!!";
    else
    {
        front++;
        front = front % n;
        s--;
        if (s == 0)
        {
            front = -1;
            rear = -1;
        }
    }
}

void display()
{
    if (rear == -1)
        cout << "\nThe queue is Empty.";
    else if (front <= rear)
    {
        cout << "\nThe queue is: \n";
        for (int i = front; i <= rear; i++)
            cout << A[i] << "\t";
    }
    else if (front > rear)
    {
        cout << "\nThe queue is: \n";
        for (int i = front; i <= rear + n; i++)
            cout << A[(i % n)] << "\t";
    }
}
