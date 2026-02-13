/*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    
    Node *insertPos(Node *head, int pos, int val) {
        
        Node* temp = head;
        int cnt = 1;
        
        if(pos == 1)
        {
            Node* newnode = new Node(val);
            newnode->next = head;
            head = newnode;
            return head;
        }
        
        while(temp != NULL)
        {
            if(cnt == pos - 1 )
            {
                Node* newnode = new Node(val);
                newnode->next = temp->next;
                temp->next = newnode;
                return head;
            }
            else
            {
                temp = temp -> next;
                cnt++;
            }
        }
        return head;
    
    
        //TC:O(list.size())
        //SC:O(1)
    }
};