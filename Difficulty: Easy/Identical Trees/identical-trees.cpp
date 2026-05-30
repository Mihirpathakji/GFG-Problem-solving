/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
    bool isIdentical(Node* r1, Node* r2) {
       
      if(r1 && !r2)
      {
          return false;
      }
      
      else if(r2 && !r1)
      {
          return false;
      }
      
      else if(!r1 && !r2)
      {
          return true;
      }
      
      else
      {
          if(r1->data == r2->data)
          {
            bool left_side = isIdentical(r1->left,r2->left);
            bool right_side = isIdentical(r1->right,r2->right);
            return left_side && right_side;
          }
          else
          {
              return false;
          }
      }
      
      return true;
       
    }
};