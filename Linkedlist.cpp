#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *next;
};

class linkedlist
{

private:
    node *head;

public:
    linkedlist()
    {
        head = NULL;
    }

    bool isempty()
    {
        if (head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void insertfirst(int val)
    {
        node *newnode = new node;
        newnode->data = val;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }

    void insertlast(int val)
    {
        node *newnode = new node;
        newnode->data = val;
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            node *curr = head;

            while (curr->next != NULL)
            {
                curr = curr->next;
            }
            curr->next = newnode;
            newnode->next = NULL;

        }
    }


    void deletefirst()
    {
        if (isempty())
        {
            return;
        }
        node *curr = head;
        head = head->next;
        delete curr;
    }


    void deletelast()
    {
        node *ptr = head;

        while (ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        node *curr = ptr;
        ptr = ptr->next;
        curr->next = NULL;
        delete ptr;
    }

    int find(int val)
    {
        node *curr = head;
        int indx = 0;
        while (curr != NULL)
        {
            if (curr->data == val)
            {
                return indx;
            }
            indx++;
            curr = curr->next;
        }
        return -1;
    }

    void printlist()
    {
        node *curr = head;
        while (curr != NULL)
        {
            cout << curr->data << ' ';
            curr = curr->next;
        }
    }

    void revers()
    {
        if (isempty() || head->next == NULL)
        {
            return;
        }

        node *pre = NULL;
        node *curr = head;
        node *next = NULL;

        while (curr->next != NULL)
        {
            next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }

        head = curr;
        head->next = pre;
    }

    ~linkedlist()
    {
        node *curr = head;
        while (curr != NULL)
        {
            curr = curr->next;
            delete head;
            head = curr;
        }
    }
};

int main()
{
    linkedlist a, b;

    a.insertfirst(5);
    a.insertfirst(1);
    a.insertlast(10);
    a.insertfirst(2);
    a.insertfirst(4);
    a.insertlast(20);
    a.printlist();
    a.revers();
    cout << endl;

    a.printlist();
    cout << endl;
    a.deletefirst();
    a.deletelast();
    a.printlist();
}
