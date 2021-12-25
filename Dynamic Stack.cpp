#include <bits/stdc++.h>

using namespace std;


class Stack
{

private:
    int top;
    int Max = 10;
    int *arr = new int[Max];
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

    void resize()
    {
        int *temp = new int[Max + Max];

        for (int i = 0; i < Max; ++i)
        {
            temp[i] = arr[i];
        }
        Max += Max;
        delete[]arr;
        arr = temp;
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
    st.push(5);
    st.push(10);
    st.push(5);
    st.push(10);
    st.push(5);
    st.push(10);
    st.push(5);
    st.resize();
    st.push(10);
    st.push(10);
    st.push(3);
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top();

}
