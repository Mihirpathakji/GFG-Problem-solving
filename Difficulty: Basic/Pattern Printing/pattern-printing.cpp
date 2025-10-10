// User function Template for C++
class Solution {
  public:
    void printPattern(int N) {
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<i+1;j++)
            {
                cout << "*";
            }
            cout << " ";
        }
    }
};