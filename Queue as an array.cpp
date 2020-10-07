#include <iostream>
#include <math.h>
#define n 5
using namespace std;
void enqueue(int &rear, int &front, int *A, int v);
void dequeue(int &rear, int &front, int *A);
void size(int rear, int front);
void ppos(int front, int rear, int *A);
void display(int &rear, int &front, int *A);
main()
{
    int m, front = -1, rear = -1;
    int A[n];
    while (1)
    {
        cout << "\nEnter your choice:\n1)To enter element in queue.\n2)To delete element from queue.\n3)To find size of queue\n4)To find front position\n5)To display elements of queue.\n6)Exit.\n";
        cin >> m;
        switch (m)
        {
        case 1:
        {
            int v;
            cout << "Enter the element your want to enqueue: ";
            cin >> v;
            enqueue(rear, front, A, v);
            break;
        }
        case 2:
        {
            dequeue(rear, front, A);
            break;
        }
        case 3:
        {
            size(rear, front);
            break;
        }
        case 4:
        {
            ppos(front, rear, A);
            break;
        }
        case 5:
        {
            display(rear, front, A);
            break;
        }
        case 6:
        {
            return 0;
            break;
        }
        default:
        {
            cout << "\nWrong input!!!";
            break;
        }
        }
    }
}

void dequeue(int &rear, int &front, int *A)
{
    if (rear == -1 || front > rear)
        cout << "\nUnderflow!!";
    else
        front++;
}

void enqueue(int &rear, int &front, int *A, int v)
{
    if (rear == n - 1)
        cout << "\nOverflow!!";
    else
    {
        if (rear == -1)
            front++;
        rear++;
        A[rear] = v;
    }
}

void size(int rear, int front)
{
    if (rear == -1 || front > rear)
        cout << "\nSize of queue is zero.";
    else
        cout << "\nThe size of queue is " << rear - front + 1 << ".";
}

void ppos(int front, int rear, int *A)
{
    if (front == -1 || front > rear)
        cout << "\nFront does not contains any element.";
    else
        cout << "\nFront contain " << A[front] << ".";
}
void display(int &rear, int &front, int *A)
{
    if (rear == -1 || front > rear)
        cout << "\nThere is no element in Queue.";
    else
    {
        for (int i = front; i <= rear; i++)
            cout << A[i] << "\t";
    }
}
