/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
       
         Node* prev = NULL;
         Node* curr = head;
         
         //Edge case :
         
         if(x == 1)
         {
             curr = curr->next;
             delete head;
             head = curr;   
         }
         else
         {
             int count_pos = 1;//1
             while(curr != NULL)
             {
                if(count_pos  == x)
                {
                    prev->next  = curr->next;
                    delete curr;
                    return head;
                }
                else
                {
                    prev = curr;
                    curr = curr->next;
                    count_pos++;
                }
             } 
             
         }
         
        return head;
       
       
    }
};