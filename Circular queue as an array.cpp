#include <iostream>
#include <string>
#define n 5

using namespace std;

int A[n], front = -1, rear = -1, o = 0;

void enqueue(int v);
void dequeue();
void size();
void ppos();
void display();

main()
{
    int m;
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
            enqueue(v);
            break;
        }
        case 2:
        {
            dequeue();
            break;
        }
        case 3:
        {
            size();
            break;
        }
        case 4:
        {
            ppos();
            break;
        }
        case 5:
        {
            display();
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
void dequeue()
{
    if (rear == -1)
        cout << "\nUnderflow";
    else if (rear == front)
    {
        rear = -1;
        front = -1;
        o = 0;
    }
    else
    {
        o--;
        front = (front + 1) % n;
    }
}
void enqueue(int v)
{
    if ((rear + 1) % n == front)
        cout << "\nOverflow";
    else if (rear == -1)
    {
        front++;
        rear++;
        o++;
        A[rear] = v;
    }
    else
    {
        rear = (rear + 1) % n;
        o++;
        A[rear] = v;
    }
}
void size()
{
    if (o <= 0)
        cout << "\nThere is no element in queue.";
    else
        cout << "\nThe queue contains " << o << " elements.";
}
void ppos()
{
    if (front == -1)
        cout << "\nThe front is pointing NULL position.";
    else
        cout << "\nThe front is pointing " << A[front] << " in queue.";
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
            cout << A[i % n] << "\t";
    }
}
