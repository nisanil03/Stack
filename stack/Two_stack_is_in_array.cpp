#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }
    // functions

    void push1(int data)
    {
        if (top2 - top1 == 1)
        {
            // space not available
            cout << "Overflow in stack 1 " << endl;
        }
        else
        {
            // space available
            top1++;
            arr[top1] = data;
        }
    }
    void pop1()
    {
        if (top1 == -1)
        {
            // stack empty
            cout << "Overflow in stack 1" << endl;
        }
        else
        {
            // stack in not empty;
            arr[top1] = 0;
            top1--;
        }
    }
    void push2(int data)
    {
        if (top2 - top1 == 1)
        {
            // space not available
            cout << "Overflow in stack 2" << endl;
        }
        else
        {
            top2--;
            arr[top2] = data;
        }
    }
    void pop2()
    {
        if (top2 == size)
        {
            // stack 2 in empty
            
            cout << "Underflow in stack 2" << endl;
        }
        else
        {
            // stack 2 in non empty
              arr[top2] = 0;
            top2++;
        }
    }
    // bus samjhane k liye hi hai ye code mai include nahi hai code
    void print()
    {
        cout << "top1 : " << top1 ;
        cout<<endl;
        cout << "top2 : " << top2<<endl;
        cout<<endl;
        for (int i = 0; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Stack s(10);
//perform push operation in stack 
    s.push1(10);
    s.print();

    s.push1(20);
    s.print();

    s.push1(30);
    s.print();

    s.push1(40);
    s.print();

    s.push1(50);
    s.print();

    s.push2(190);
    s.print();

    s.push2(120);
    s.print();

    s.push2(180);
    s.print();

    s.push2(140);
    s.print();

    s.push2(130);
    s.print();

// permorme pop operation in stack 
  s.pop1();    
  s.print();
 
  s.pop1();    
  s.print();

   s.pop1();    
  s.print();

   s.pop1();    
  s.print();

   s.pop1();    
  s.print();

   s.pop1();    
  s.print();

    return 0;
}