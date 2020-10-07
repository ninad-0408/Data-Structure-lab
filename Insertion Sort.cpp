#include <bits/stdc++.h>
//iiitmg@123

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
    int y;
    for (int i = 1; i < n; i++)
    {
        y = A[i];
        for (int j = i - 1; j >= 0; j--)
            if (y > A[j])
            {
                A[j + 1] = y;
                break;
            }
            else if (y <= A[j])
            {
                A[j + 1] = A[j];
                if (j == 0)
                    A[j] = y;
            }
    }
    cout << "\nThe sorted Array is: ";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
}
