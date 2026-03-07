//Linkedlist Based Implementation of Queues:

class Node{
    
    public:
    
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }

};

class myQueue {
    
    Node* head;//front 
    Node* tail;//rear
    int cnt;
    
    public:
    myQueue() {
        head = NULL;
        tail = NULL;
        cnt = 0;
    }

    bool isEmpty() {
        if(head == NULL)
        {
            return true;
        }
        return false;
    }

    void enqueue(int x) {
        
        Node* newnode = new Node(x);
        
        if(isEmpty())
        {
            head = newnode;
            tail = newnode;
        }
        
        else
        {
            tail->next = newnode;
            tail = newnode;   
        }
        cnt++;
    }

    void dequeue() {
        
        if(head == NULL)
        {
            return;
        }
            
        head = head->next;
        cnt--;
    }

    int getFront() {
        
        if(head == NULL)
        {
            return -1;
        }
        return head->data;
    }

    int size() {
        return cnt;
    }
};
