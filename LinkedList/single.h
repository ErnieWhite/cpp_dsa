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
        SingleLinkedList(const SingleLinkedList& L);
        ~SingleLinkedList();
        void operator=(const SingleLinkedList& L);
        void displayList() const;
        int countNodes() const;
        int find(int data) const;
        void insertAtBeginning(int data);
        void insertAtEnd(int data);
        void createList();
        void insertAfter(int data, int x);
        void insertBefore(int data, int x);
        void insertAtPosition(int data, int k);
        void deleteFirstNode();
        void deleteLastNode();
        void deleteNode(int data);
        void reverseList();
        void insertCycle(int x);
        void hasCycle();
        void removeCycle();
        void bubbleSortExData();
        Node* bubbleSortExLinks();
        void mergeLists1(const SingleLinkedList& L, SingleLinkedList& mergeList);
        void mergeLists2(SingleLinkedList& L, SingleLinkedList& mergedList);
        void mergeSort();
};


        
