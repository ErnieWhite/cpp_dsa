class SingleLinkedList 
{
    Node *start;

    bool isEmpty() const;
    Node* findCycle();
    Node* merge1(Node *p1; Node *p2);
    Node* merger2(Node *p1, Node *p2);
    Node* divideList(Node* p);
    Node* mergerSortRec(Node* listStart);

    public:
        SingleLinkedList();
        SingleLinkedList(const SingleLinkedList & L);
        
