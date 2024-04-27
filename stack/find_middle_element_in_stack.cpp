#include<bits/stdc++.h>
using namespace std;


void findMiddlePoint(stack<int>&s , int &totalsize)
{
    if(s.size() == 0){
        cout<<"There is no element in stack"<<endl;
        return;
    }
     //base case 
     if(s.size() == totalsize/2 +1)
     {
        cout<<"Middle element is : "<< s.top()<<endl;
        return ;
     }
     //operation 
     int temp = s.top();
     s.pop();

     //recusive call
        findMiddlePoint(s, totalsize);

        //backtrackin 
        s.push(temp); 


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
   s.push(80);
   s.push(90);

   int totalsize = s.size();
   findMiddlePoint(s ,totalsize);

    return 0;
}