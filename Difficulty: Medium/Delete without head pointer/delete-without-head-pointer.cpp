/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/

class Solution {
  public:
    void deleteNode(Node* del_node) {
        
        Node*curr  = del_node;
        Node* temp = curr->next;
        curr->data  = temp->data;
        curr->next = temp->next;
        delete temp;
    }
};