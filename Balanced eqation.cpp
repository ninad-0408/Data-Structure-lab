#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s, t;
    int top = -1;
    cout << "Enter the expression to be checked: ";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            top++;
            t[top] = s[i];
        }
        else if (s[i] == ')')
        {
            if (t[top] != '(')
            {
                cout << "Expression is not Balanced.";
                return 0;
            }
            else
                top--;
        }
        else if (s[i] == '}')
        {
            if (t[top] != '{')
            {
                cout << "Expression is not Balanced.";
                return 0;
            }
            else
                top--;
        }
        else if (s[i] == ']')
        {
            if (t[top] != '[')
            {
                cout << "Expression is not Balanced.";
                return 0;
            }
            else
                top--;
        }
    }
    cout << "Expression is Balanced.";
    return 0;
}
