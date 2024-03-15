#include <iostream>
#include "DLinkedList.h"
using namespace std;

int main()
{
    DLinkedList L;
    int choice,n;
    do {
        cout << "\t\tSELECT AN OPTION" << endl;
        cout << "1. Display all Nodes" << endl;
        cout << "2. Display in Reverse Order" << endl;
        cout << "3. Insert Node at Start" << endl;
        cout << "4. Insert Node at End" << endl;
        cout << "5. Insert Node Before" << endl;
        cout << "6. Insert Node After" << endl;
        cout << "7. Exit" << endl;
        cout<<"Enter Choice "<<endl;
        cin>>choice;
        if (choice == 1)
            L.Display();
        if (choice == 2)
            L.DisplayReverse();
        if (choice == 3)
        {
            cout<<"Enter data you want to insert :"<<endl;
            cin>>n;
            L.InsertAtStart(n);
        }
        if (choice == 4)
        {
            cout<<"Enter data you want to insert :"<<endl;
            cin>>n;
            L.InsertAtEnd(n);
        }
        if (choice == 5)
        {
            cout << "Enter data before you want to insert :" << endl;
            cin >> n;
            L.InsertBefore(n);
        }
        if (choice == 6)
        {
            cout<<"Enter data after you want to insert :"<<endl;
            cin>>n;
            L.InsertAfter(n);
        }
    } while (choice != 7);
    return 0;
}
