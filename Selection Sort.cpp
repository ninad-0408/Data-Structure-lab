#include <bits/stdc++.h>

using namespace std;

main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int A[n];
    cout << "\nEnter the elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> A[i];
    int min, k;
    for (int i = 0; i < n - 1; i++)
    {
        min = A[i];
        for (int j = i; j < n; j++)
            if (min > A[j])
            {
                min = A[j];
                k = j;
            }
        A[k] = A[i];
        A[i] = min;
    }
    cout << "\nThe sorted Array is: ";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
}
