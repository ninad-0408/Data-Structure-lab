#include <iostream>
#define n 10
using namespace std;
int A[n];
int top1 = -1, top2 = -1;

void pop(int i);
void push(int i);
void display(int i);
void topp(int i);
void reverse(int i);

main()
{
	while (1)
	{
		int i;
		cout << "\nEnter 1 to operate on first stack and 2 for second..: ";
		cin >> i;
		if (!(i != 1 && i != 2))
			;
		else
		{
			cout << "\nWrong Input\n";
			return 0;
		}
		cout << "\nSelect your choice: \n1)Insert element in stack.\n2)Delete element from stack.\n3)To display elements of stack.\n4)To reverse stack.\n5)To show element that top points.\n6)Exit.\n";
		int t;
		cin >> t;
		switch (t)
		{
		case 1:
		{
			push(i);
			break;
		}
		case 2:
		{
			pop(i);
			break;
		}
		case 3:
		{
			display(i);
			break;
		}
		case 4:
		{
			reverse(i);
			break;
		}
		case 5:
		{
			topp(i);
			break;
		}
		case 6:
		{
			return 0;
		}
		default:
		{
			cout << "Wrong input entered...";
			break;
		}
		}
	}
}

void pop(int i)
{
	if (i == 1)
	{
		if (top1 == -1)
			cout << "\nUnderflow!!\n";
		else
			top1--;
	}
	else
	{
		if (top2 == -1)
			cout << "\nUnderflow!!\n";
		else if (top2 == n / 2)
			top2 = -1;
		else
			top2--;
	}
}

void push(int i)
{
	int u;
	if (i == 1)
	{
		if (top1 == n / 2 - 1)
			cout << "\nOverflow!!";
		else
		{
			cout << "\nEnter the element to be pushed: ";
			cin >> u;
			top1++;
			A[top1] = u;
		}
	}
	else
	{
		if (top2 == n - 1)
			cout << "\nOverflow";
		else if (top2 == -1)
		{
			cout << "\nEnter the element to be pushed: ";
			cin >> u;
			top2 = n / 2;
			A[top2] = u;
		}
		else
		{
			cout << "\nEnter the element to be pushed: ";
			cin >> u;
			top2++;
			A[top2] = u;
		}
	}
}

void display(int i)
{
	if (i == 1)
	{
		if (top1 == -1)
			cout << "\nStack 1 is empty.";
		else
			for (int j = 0; j <= top1; j++)
				cout << A[j] << "\t";
	}
	else
	{
		if (top2 == -1)
			cout << "\nStack 2 is empty.";
		else
			for (int j = n / 2; j <= top2; j++)
				cout << A[j] << "\t";
	}
}

void topp(int i)
{
	if (i == 1)
	{
		if (top1 == -1)
			cout << "\nTop is pointing null.";
		else
			cout << "\nTop is pointing " << A[top1] << ".";
	}
	else
	{
		if (top2 == -1)
			cout << "\nTop is pointing null.";
		else
			cout << "\nTop is pointing " << A[top2] << ".";
	}
}

void reverse(int i)
{
	int *b;
	if (i == 1)
	{
		for (int j = 0; j <= top1; j++)
			b[j] = A[top1 - j];
		for (int j = 0; j <= top1; j++)
			A[j] = b[j];
	}
	else
	{
		for (int j = n / 2; j <= top2; j++)
			b[n / 2 - j] = A[top2 - j];
		for (int j = n / 2; j <= top2; j++)
			A[j] = b[j];
	}
}
