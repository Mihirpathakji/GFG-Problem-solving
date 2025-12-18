class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        //1.Transpose:
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                //transpose of matrix is swapping of elements.
                swap(mat[i][j],mat[j][i]);
            }
        }
        //2.Reverse each Row
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                swap(mat[i][j],mat[i][n-j-1]);
            }
        }
        
        //1.Transpose:
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                //transpose of matrix is swapping of elements.
                swap(mat[i][j],mat[j][i]);
            }
        }
        //2.Reverse each Row
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                swap(mat[i][j],mat[i][n-j-1]);
            }
        }
    
        //TC:O(n^2)
        //SC:O(1)
    }
};