#include <bits/stdc++.h>h

using namespace std;

main()
{
    int r;
    cout << "Enter the number of elements in array: ";
    cin >> r;
    int A[r];
    cout << "Enter the elements: ";
    for (int i = 0; i < r; i++)
        cin >> A[i];
    int m, n = 0;
    cout << "Enter the element to be searched: ";
    cin >> m;
    int i = 0;
    while (i < r)
    {
        if (A[i] == m)
        {
            cout << "The element is at: " << i << " index.\n";
            n++;
        }
        i++;
    }
    if (n == 0)
        cout << "The given number is not in array.";
}
