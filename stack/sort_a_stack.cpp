#include <bits/stdc++.h>
using namespace std;
void insertSorted(stack<int> &s, int target)
{
    ////base case
    if(s.empty())
    {
        // simply insert as it will be sorted onl
        s.push(target);
        return;
    }
    if (s.top() >= target)
    {
        s.push(target);
        return;
    }
    // Normal case
    int tpElement = s.top();
    s.pop();
    insertSorted(s, target);

    // BT // Backtracking -> Push element while returning
    s.push(tpElement);
}

void Sortstack(stack<int> &s)
{
    // base casec
    if (s.empty())
    {
        return;
    }

    int tpElement = s.top();
    s.pop();
    
    // Recursive call
    Sortstack(s);

    // Backtracking
    insertSorted(s, tpElement);
}
int main()
{
    stack<int> s;
    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(9);

    Sortstack(s);

    cout << "printing" << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}