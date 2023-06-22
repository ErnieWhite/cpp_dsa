#include <iostream>
#include "node.h"
#include "single.h"

using namespace std;

int main() 
{
    SingleLinkedList list;

    int choice, data, x, position;

    while (1)
    {
        cout << "\n";
        cout << "1. Display list\n";
        cout << "2. Count the number of nodes\n";
        cout << "3. Search for an element\n";
        cout << "19. Quit\n";

        cout << "Enter your choice : ";
        cin >> choice;

        if (choice == 19)
            break;

        switch (choice)
        {
            case 1:
                list.displayList();
                break;
            case 2:
                cout << "Number of nodes is " << list.countNodes() << "\n";
                break;
            case 3:
                cout << "Enter the element to be searched : ";
                cin >> data;
                position = list.find(data);
                if (position == 0)
                    cout << data << " not in list\n";
                else
                    cout << data << " present at position " << position << "\n";
                break;
        }
    }
    cout << "Exiting\n";
}




