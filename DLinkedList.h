#include "Node.h"
class DLinkedList
{
    Node *First;
    Node *Last;
public:
    DLinkedList()
    {
        First = nullptr;
        Last = nullptr;
    }
    bool IsEmpty();
    void Display();
    void DisplayReverse();
    void InsertAtStart(int n);
    void InsertAtEnd(int n);
    void InsertBefore(int n);
    void InsertAfter(int n);
    ~DLinkedList()
    {
        Node* temp = First;
        while (temp != nullptr)
        {
            First = First->next;
            delete temp;
            temp = First;
        }
        First = nullptr;
        Last = nullptr;
    }
};