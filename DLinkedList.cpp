#include "DLinkedList.h"
#include <iostream>
using namespace std;

bool DLinkedList :: IsEmpty()
{
    if (First == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void DLinkedList :: Display()
{
    Node *temp = First;
    while(temp != nullptr)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
void DLinkedList :: DisplayReverse()
{
    Node *temp = Last;
    while(temp != nullptr)
    {
        cout<<temp->data<<endl;
        temp=temp->prev;
    }
}
void DLinkedList :: InsertAtStart(int n)
{
    Node *temp;
    temp = new Node;
    temp->data = n;
    temp->prev = nullptr;
    temp->next = nullptr;
    if (First == nullptr)
    {
        First = temp;
        Last = temp;
    }
    else
    {
        temp->next = First;
        First->prev = temp;
        First = temp;
    }
    Display();
}
void DLinkedList :: InsertAtEnd(int n)
{
    Node *temp;
    temp = new Node;
    temp->data = n;
    temp->prev = nullptr;
    temp->next = nullptr;
    if (First == nullptr)
    {
        First = temp;
        Last = temp;
    }
    else
    {
        Last->next = temp;
        temp->prev = Last;
        Last = temp;
    }
    Display();
}
void DLinkedList :: InsertBefore(int n)
{
    bool found = false;
    Node *c = First;
    while(c != nullptr && found == false)
    {
        if(c->data == n)
        {
            found = true;
        }
        else
        {
            c = c->next;
        }
    }
    if(found == false)
    {
        cout<<"Not Found"<<endl;
    }
    else
    {
        Node *temp;
        temp = new Node;
        cout<<"Enter data for new Node: "<<endl;
        int n1;
        cin>>n1;
        temp->data = n1;
        temp->next = nullptr;
        temp->prev = nullptr;
        if (c == First)
        {
            temp->next = First;
            First->prev = temp;
            First =temp;
        }
        else
        {
            temp->next = c;
            c->prev->next = temp;
            temp->prev = c->prev;
            c->prev = temp;
        }
    }
    Display();
}
void DLinkedList::InsertAfter(int n) {
    bool found = false;
    Node* c = First;
    while (c != nullptr && !found)
    {
        if (c->data == n) {
            found = true;
        } else {
            c = c->next;
        }
    }
    if (!found)
    {
        cout << "Not Found" << endl;
    }
    else
    {
        Node* temp = new Node();
        cout << "Enter data for new Node: " << endl;
        int n1;
        cin >> n1;
        temp->data = n1;
        temp->next = nullptr;
        temp->prev = nullptr;
        if (c == Last)
        {
            temp->prev = Last;
            Last->next = temp;
            Last = temp;
        }
        else
        {
            temp->next = c->next;
            temp->prev = c;
            /*if (c->next != nullptr)
            {
                c->next->prev = temp;
            }*/
            c->next->prev = temp;
            c->next = temp;
        }
    }
    Display();
}
