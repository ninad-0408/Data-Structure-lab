#include <iostream>
#include <math.h>
#define N 5

using namespace std;
void push(int &top, int *stack);
void pop(int &top, int *stack);
void display(int top, int *stack);
void reverse(int top, int *stack);
int main()
{
	int top = -1;
	while (1)
	{
		cout << "\nSelect your choice: \n1)Insert element in stack.\n2)Delete element from stack.\n3)To display elements of stack.\n4)To reverse stack.\n5)Exit.\n";
		int t, stack[N];
		cin >> t;
		switch (t)
		{
		case 1:
		{
			push(top, stack);
			break;
		}
		case 2:
		{
			pop(top, stack);
			break;
		}
		case 3:
		{
			display(top, stack);
			break;
		}
		case 4:
		{
			reverse(top, stack);
			break;
		}
		case 5:
		{
			return 0;
			break;
		}
		default:
		{
			cout << "Wrong input entered...";
			return 0;
			break;
		}
		}
	}
}
void push(int &top, int *stack)
{
	top++;
	if (top >= N)
		cout << "Overflow!!\n";
	else
	{
		int r;
		cout << "Enter an element to be pushed: ";
		cin >> r;
		stack[top] = r;
	}
}
void pop(int &top, int *stack)
{
	if (top == -1)
		cout << "Underflow!!\n";
	else
	{
		int r;
		r = stack[top];
		top--;
	}
}
void display(int top, int *stack)
{
	if (top == -1)
		cout << "Empty stack!";
	else
		for (int i = 0; i <= top; i++)
			cout << stack[i] << " ";
}
void reverse(int top, int *stack)
{
	int a[top + 1];
	for (int i = 0; i <= top; i++)
		a[top - i] = stack[i];
	for (int i = 0; i <= top; i++)
		stack[i] = a[i];
}
