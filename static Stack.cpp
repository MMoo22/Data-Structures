#include <bits/stdc++.h>

using namespace std;
const int Max = 10;

class Stack
{

private:


    int arr[Max];
    int top;
public:
    Stack()
    {
        top = -1;
    }

    bool isempty()
    {
        if (top == -1) return true;
        else return false;
    }

    bool isfull()
    {
        if (top == Max - 1)
        {
            return true;
        }
        else
            return false;
    }

    void push(int val)
    {
        if (isfull())
        {
            cout << "Isfull\n";
            return;
        }
        top++;
        arr[top] = val;
    }

    void pop()
    {
        if (isempty()) return;
        top--;
    }

    int Top()
    {
        if (isempty()) return -1;
        return arr[top];
    }

    void print()
    {
        while (!isempty())
        {
            cout << arr[top];
            pop();
        }
    }

};

int main()
{
    Stack st;
    st.push(5);
    st.push(10);
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top();
}
