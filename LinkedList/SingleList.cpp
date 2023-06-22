#include <iostream>
#include "node.h"
#include "single.h"

using namespace std;

SingleLinkedList::SingleLinkedList()
{
    start = NULL;
}

inline bool SingleLinkedList::isEmpty() const
{
    return start == NULL;
}

void SingleLinkedList::displayList() const
{
    if (isEmpty())
    {
        cout << "List is empty\n";
        return;
    }

    cout << "List is :\n";
    Node *p = start;
    while (p != NULL)
    {
        cout << p->info << ", ";
        p = p->link;
    }
    cout << "\n\n";
}

int SingleLinkedList::countNodes() const
{
    int n = 0;
    Node *p = start;
    
    while (p != NULL)
    {
        n++;
        p = p->link;
    }
    return n;
}

int SingleLinkedList::find(int x) const
{
    int position = 1;
    Node *p = start;

    while (p != NULL)
    {
        if (p->info == x)
        {
            return position;
        }
        position++;
    }
    return 0;
}

