/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        
       if(head == NULL)
       {
           head  = new Node(x);
           return head;
       }
       Node* temp = head;//NULL
       while(temp->next != NULL)
       {
           temp = temp->next;
       }
       
       Node* newnode = new Node(x);//340
       temp->next = newnode;
       return head;
    }
};