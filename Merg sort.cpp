#include <bits/stdc++.h>

using namespace std;

void sort(int *A, int s, int l);
void merg(int *A, int s, int l);

main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int A[n];
    cout << "\nEnter the elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> A[i];
    sort(A, 0, n - 1);
    cout << "\nThe sorted array is: ";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
}

void sort(int *A, int s, int l)
{
    if (s < l)
    {
        int m = (s + l) / 2;
        for (int i = s; i <= l; i++)
            cout << A[i] << " ";
        cout << endl;
        sort(A, s, m);
        sort(A, m + 1, l);
        merg(A, s, l);
    }
}

void merg(int *A, int s, int l)
{
    int t;
    for (int i = s; i <= l; i++)
        for (int j = s; j < l; j++)
            if (A[j] > A[j + 1])
            {
                t = A[j];
                A[j] = A[j + 1];
                A[j + 1] = t;
            }
    for (int i = s; i <= l; i++)
        cout << A[i] << " ";
    cout << "\n";
}
