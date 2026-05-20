class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {

        int ans;
        bool flag = false;
        bool slag = false;
        for(int i = 0 ; i < mat.size(); i++)
        {
            int cnt0 = 0;
            for(int j = 0 ; j  <mat[i].size(); j++)
            {
                if(mat[i][j] == 0)
                {
                    cnt0++;
                }
            }
            if(cnt0 == mat.size()-1)
            {
                for(int k = 0 ; k <mat.size(); k++)
                {
                    if(mat[k][i] == 0)
                    {
                        slag = true;
                    }
                }
                
                if(!slag)
                {
                    flag = true;
                    ans = i;
                    break;
                }
            }
        }
        
        if(!flag)
        {
            return -1;
        }
        return ans;
    }
};