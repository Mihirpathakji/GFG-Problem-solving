//JAY SHREE RAM.

class Solution {
  public:
    
    void dfs(int row, int col,vector<vector<char>>& grid,vector<vector<bool>>&visited,vector<pair<int,int>>& vec,int base_row,int base_col) {
        
        visited[row][col] = true;//now check neighbouring lands are not visited? 
        int n = grid.size();
        int m = grid[0].size();
        
        vec.push_back({row - base_row , col - base_col});
        
        //dfs at it's neighbours.
        
        int row_dir[4] = {0,1,0,-1}; 
        int col_dir[4] = {1,0,-1,0};
        
        for(int i = 0;i < 4;i++) {
            if(row_dir[i] + row >= 0 && row_dir[i] + row < n && col_dir[i] + col >=0 && col_dir[i] + col < m && visited[row + row_dir[i]][col + col_dir[i]] == false && grid[row + row_dir[i]][col + col_dir[i]] == 'L') {
                dfs(row + row_dir[i], col + col_dir[i], grid,visited,vec,base_row,base_col);   
            }
        }
        
    }
  
    int countDistinctIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        int ans = 0;
        set<vector<pair<int,int>>>st;
        
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                if(visited[i][j] == false && grid[i][j] == 'L') {
                    int base_row = i;
                    int base_col = j;//since we need to subtract every 
                    //element coming in the vector with this 
                    //base row and base col.
                    
                    vector<pair<int,int>>vec;
                    dfs(i,j,grid,visited,vec,base_row,base_col);
                    st.insert(vec);
                }
            }
        }
        return st.size();
    
    }
};
