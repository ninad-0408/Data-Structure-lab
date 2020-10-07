
// To equalize array by multiplication of 2 and 3.
#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

main()
{
    int t, r = 0, max, k = 0;
    cout << "Enter the number of elements of array: ";
    cin >> t;
    int A[t];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < t; i++)
        cin >> A[i];
    for (int i = 0; i < t; i++)
    {
        k = A[i];
        while (abs(k) >= 1)
        {
            if (k % 6 == 0)
            {
                k /= 6;
                continue;
            }
            else if (k % 3 == 0)
            {
                k /= 3;
                continue;
            }
            else if (k % 2 == 0)
            {
                k /= 2;
                continue;
            }
            if (i == 0)
            {
                max = k;
                break;
            }
            else if (max == k)
                break;
            else
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}
