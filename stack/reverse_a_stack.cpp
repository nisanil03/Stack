#include <bits/stdc++.h>
using namespace std;

void insertatBottom(stack<int> &s, int target)
{
    // base case
    if (s.empty())
    {
        s.push(target);
        return;
    }

    // step 1
    int topElement = s.top();
    s.pop();

    // step2 recursive cell
    insertatBottom(s, target);

    // step 3 backtracking
    s.push(topElement);
}

void FullreverseStack(stack<int> &s)
{

    // base case
    if (s.empty())
    {
        return;
    }
    int target = s.top();
    s.pop();

    // reverse stack
    FullreverseStack(s);

    // insert at the bottom target ka
    insertatBottom(s, target);
}
int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << " Printing " << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    FullreverseStack(s);

    return 0;
}
