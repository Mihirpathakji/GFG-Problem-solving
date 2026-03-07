class myQueue {
    
    int* arr;
    int size;
    int front;
    int rear;


  public:
    myQueue(int n) {
        arr = new int[n];
        size = n;
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        if((rear+1)%size == front)
        {
            return true;
        }
        return false;
    }

    void enqueue(int x) {
        
        if((rear+1)%size == front)
        {//Queue is full.
            return;
        }
        else if(front == -1)
        {
            front++;
            rear++;
            arr[rear] = x;
        }
        else
        {
            rear = (rear+1)%size;
            arr[rear] = x;
        }
    }

    void dequeue() {
        
        if(front == -1)
        {
            return;
        }
        else if(front == rear)
        {
            //single element in Queue.Popping it will made the Queue empty.
            front  = -1;
            rear = -1;
        }
        else
        {
            front = (front+1)%size;
        }
        
    }

    int getFront() {
        if(isEmpty())
        {
            return -1;
        }
        return arr[front];
    }

    int getRear() {
        if(isEmpty())
        {
            return -1;
        }
        return arr[rear];
    }
};