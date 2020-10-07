
// To find triplet with given sum from array.
#include <iostream>
#include <string.h>

using namespace std;
main()
{
    int t, r, s = 0;
    cout << "Enter the number of elements of array: ";
    cin >> t;
    int A[t];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < t; i++)
        cin >> A[i];
    cout << "Enter the number sum to be checked: ";
    cin >> r;
    for (int i = 0; i < t; i++)
        for (int j = i + 1; j < t; j++)
            for (int k = j + 1; k < t; k++)
                if (A[i] + A[j] + A[k] == r)
                {
                    cout << A[i] << " " << A[j] << " " << A[k] << endl;
                    s--;
                }
    if (s >= 0)
        cout << "No Triplet..";
}
