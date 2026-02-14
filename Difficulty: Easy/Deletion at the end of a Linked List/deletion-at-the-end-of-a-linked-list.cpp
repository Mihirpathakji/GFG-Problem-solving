/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* removeLastNode(Node* head) {
        
        Node* curr  = head;
        Node* prev = NULL;
        
        //Edge case :- Only a single node is present.
        
        if(head->next == NULL)
        {
            delete head;
            return prev;
        }
        else
        {
            while(curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
            }
            //curr-> points to last node. prev->points to second last node.
            prev->next = NULL;
            delete curr;
        }
        return head;
        
    }
};