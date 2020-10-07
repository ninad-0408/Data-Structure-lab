#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s, r, t;
    int j = 0, top = -1;
    cout << "Enter the Infix expression: ";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) || (s[i] >= '0' && s[i] <= '9'))
        {
            r.push_back(s[i]);
            j++;
        }
        else if (j != 0)
        {
            if (s[i] == '(')
            {
                top++;
                t[top] = s[i];
            }
            else if (s[i] == '^')
            {
                top++;
                t[top] = s[i];
            }
            else if (s[i] == '+' || s[i] == '-')
            {
                for (int k = top; k >= 0; k--)
                    if (t[k] != '(')
                    {
                        if (t[k] == '+' || t[k] == '^' || t[k] == '-' || t[k] == '*' || t[k] == '/')
                        {
                            r.push_back(t[k]);
                            top--;
                        }
                    }
                    else
                        break;
                top++;
                t[top] = s[i];
            }
            else if (s[i] == '*' || s[i] == '/')
            {
                for (int k = top; k >= 0; k--)
                    if (t[k] != '(')
                    {
                        if (t[k] == '^' || t[k] == '/' || t[k] == '*')
                        {
                            r.push_back(t[k]);
                            top--;
                        }
                    }
                    else
                        break;
                top++;
                t[top] = s[i];
            }
            else if (s[i] == ')')
            {
                for (int k = top; k >= 0; k--)
                    if (t[k] != '(')
                    {
                        r.push_back(t[k]);
                        top--;
                    }
                    else if (j == 0)
                    {
                        top--;
                        break;
                    }
            }
        }
        else
        {
            cout << "Wrong INPUT!";
            return 0;
        }
    }
    while (top != -1)
    {
        r.push_back(t[top]);
        top--;
    }
    cout << r;
    return 0;
}
