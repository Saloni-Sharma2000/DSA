#include <iostream>
using namespace std;
class Stack{
  private:
    int size,top=-1;
    int *arry;
  public:
    Stack(int size)
    {
        this->size=size;
        arry=new int[size];
    }
    void print()
    {
        if(top!= -1)
        {
            cout<<"Value is :- "<<arry[top]<<endl;
        }
        else{
            cout<<"No value (Stack is empty)."<<endl;
        }
    }
    void push(int value)
    {
        if(top<size)
        {
            top++;
            arry[top]=value;
        }
        else{
            cout<<"Stack is full."<<endl;
        }
    }
    int pop()
    {
        if(top!=-1)
        {
            top--;
        }
        else{
            cout<<"Stack is empty."<<endl;
        }
    }
};

int main() {
    // Write C++ code here
    Stack stack=Stack(5);
    stack.print();
    stack.push(2);
    stack.push(4);
    stack.push(6);
    stack.push(8);
    stack.push(10);
    stack.push(12);
    stack.push(14);
    stack.print();
    stack.pop();
    stack.print();
    return 0;
}
