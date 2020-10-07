#include <bits/stdc++.h>

using namespace std;

main()
{
    int r;
    cout << "Enter the number of elementa in array: ";
    cin >> r;
    int A[r];
    cout << "Enter the elements: ";
    for (int i = 0; i < r; i++)
        cin >> A[i];
    int m;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < r - i; j++)
            if (A[j] > A[j + 1])
            {
                m = A[j];
                A[j] = A[j + 1];
                A[j + 1] = m;
            }
    for (int i = 0; i < r; i++)
        cout << A[i] << "\t";
}
