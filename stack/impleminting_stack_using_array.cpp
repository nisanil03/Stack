#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;

    // consturcter
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }
    // functions
    void push(int data)
    {
        if (size - top > 1)
        {
            // space available
            // insert
            top++;
            arr[top] = data;
        }
        else
        {
            // space not available
            cout << "Stack Overflow " << endl;
        }
    }

     void pop()
    {
        // Stack empty
        if (top == -1)
        {
            cout << "Stack underflow" << endl;
        }
        else
        {
            // Stack not empty and hence we can delete
            top--;
        }
    }

    int getTop()
    {
        if (top == -1)
        {
            cout << "There is not element in stack " << endl;
        }
        else
        {
            return arr[top];
        }
    }

    // return in number valid element present in stack ;
    int getSize()
    {
        return top + 1;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    //creation 
    Stack s(10);

    // insertion stack

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while (!s.isEmpty())
    {
        cout << s.getTop() << " ";
          s.pop();
    }
    cout<<" Size of Stack "<<s.getSize()<<endl;
    
    return 0;
}