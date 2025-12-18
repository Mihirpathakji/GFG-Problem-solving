class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        //1.Reverse each row:
        for(int i=0;i<n;i++)
        {//outer loop->row==i==constant
            for(int j=0;j<n/2;j++)
            {
                swap(mat[i][j],mat[i][n-j-1]);
            }
        }
        //2.Transpose:
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(mat[i][j],mat[j][i]);
            }
        }
        
        //TC:O(n^2)
        //SC:O(1)
    }
};
