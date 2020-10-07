#include <bits/stdc++.h>

using namespace std;

void search(int *A, int u, int l, int m, int &s);

main()
{
    int r;
    cout << "Enter the number of elementa in array: ";
    cin >> r;
    int A[r];
    cout << "Enter the elements: ";
    for (int i = 0; i < r; i++)
        cin >> A[i];
    int m, n = 0;
    cout << "Enter the element to be searched: ";
    cin >> m;
    int s = 0;
    search(A, 0, r - 1, m, s);
    if (s == 0)
        cout << "The given element is not in array.";
}

void search(int *A, int u, int l, int m, int &s)
{
    if (u < l)
    {
        int mid = (u + l) / 2;
        if (m > A[mid])
            search(A, mid + 1, l, m, s);
        else if (m < A[mid])
            search(A, 0, mid - 1, m, s);
        else
        {
            cout << "The number is at: " << mid << " index.\n";
            s++;
        }
    }
}
