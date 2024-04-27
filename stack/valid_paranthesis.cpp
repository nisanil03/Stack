
// most important question in stack

#include <bits/stdc++.h>
using namespace std;
bool isValid(string &str)
{
    stack <char> s;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        // opening bracket
        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else
        {
            // closing bracket
            if (!s.empty())
            {
                char topch = s.top();
                if (ch == ')' && topch == '(')
                {
                    // matching bracktes
                    // simply pop
                    s.pop();
                }

                else if (ch == '}' && topch == '{')
                {
                    // matching bracktes
                    // simply pop
                    s.pop();
                }

                else if (ch == ']' && topch == '[')
                {
                    // matching bracktes
                    // simply pop
                    s.pop();
                }
                else
                {
                    // no matching the bracking
                    return false;
                }
            }
            else
            {
                // Closing bracket is there but opening bracket is not there
                return false;
            }
        }
    }
    // Stack empty -> valid expression
    if (s.empty())
    {
        // valid
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string str = "(([]))[{()}]{()}";
    if (isValid(str))
    {
        cout << "Valid Paranthesis";
    }
    else
    {
        cout << "Not valid Paranthesis";
    }

    return 0;
}