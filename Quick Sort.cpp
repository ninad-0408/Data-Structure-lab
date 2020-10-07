#include <bits/stdc++.h>

using namespace std;

void sort(int *A, int u, int l);

main()
{
    int r;
    cout << "Enter the number of elementa in array: ";
    cin >> r;
    int A[r];
    cout << "Enter the elements: ";
    for (int i = 0; i < r; i++)
        cin >> A[i];
    sort(A, 0, r - 1);
    for (int i = 0; i < r; i++)
        cout << A[i] << " ";
}

void sort(int *A, int u, int l)
{
    if (u < l)
    {
        int i = u, m, j = l, t = A[u];
        while (j >= i)
        {
            while (A[i] <= t)
                i++;
            while (A[j] > t)
                j--;
            if (i < j)
            {
                m = A[i];
                A[i] = A[j];
                A[j] = m;
            }
        }
        m = t;
        A[u] = A[j];
        A[j] = m;
        sort(A, j + 1, l);
        sort(A, u, j - 1);
    }
}
