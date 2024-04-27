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

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    if (s.empty())
    {
        cout << "The stack is empty." << endl;
        return 0;
    }

    int target = s.top();
    s.pop();
    insertatBottom(s, target);

    cout << " Printing " << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}