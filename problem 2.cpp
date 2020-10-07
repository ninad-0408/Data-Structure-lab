
// To find largest pallindrome in array.
#include <iostream>
#include <string.h>

using namespace std;
main()
{
    int t;
    cout << "Enter the number of elements of array: ";
    cin >> t;
    int n, max = 0, k = 0;
    int A[t];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < t; i++)
        cin >> A[i];
    for (int i = 0; i < t; i++)
    {
        n = 0;
        int r = A[i];
        int s = 0;

        while (r > 0)
        {
            s *= 10;
            s += (r % 10);
            r = int(r / 10);
            n++;
        }

        if (s == A[i])
        {
            if (max < n)
            {
                max = n;
                k = i;
            }
            else if (max == n)
            {
                A[k] < A[i];
                k = i;
            }
        }
    }
    cout << A[k];
}
