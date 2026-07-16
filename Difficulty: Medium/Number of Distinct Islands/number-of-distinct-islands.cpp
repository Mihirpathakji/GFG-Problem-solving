//JAY SHREE RAM.

class Solution {
  public:
    
    void dfs(int row, int col,vector<vector<char>>& grid,vector<vector<bool>>&visited,vector<pair<int,int>>& vec,int base_row,int base_col) {
        
        visited[row][col] = true;//now check neighbouring lands are not visited? 
        int n = grid.size();
        int m = grid[0].size();
        
        vec.push_back({row - base_row ,col - base_col});//
        
        int row_dir[4] = {0,1,0,-1}; 
        int col_dir[4] = {1,0,-1,0};
        
        for(int i = 0;i < 4;i++) {
            if(row_dir[i] + row >= 0 && row_dir[i] + row < n && col_dir[i] + col >=0 && col_dir[i] + col < m && visited[row + row_dir[i]][col + col_dir[i]] == false && grid[row + row_dir[i]][col + col_dir[i]] == 'L') {
                dfs(row + row_dir[i], col + col_dir[i], grid,visited,vec,base_row,base_col);   
            }
        }
        
    }
  
    int countDistinctIslands(vector<vector<char>>& grid) {
        
        
        //We can differentiate the shapes based on their
        //relative positions with respect to the origin of 
        //that island.
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        set<vector<pair<int,int>>>st; 
        
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                if(visited[i][j] == false && grid[i][j] == 'L') {
                    int base_row = i;//0 1 2 // 0 0 3
                    int base_col = j;//0 2 0.// 0 4 0.since we need to subtract every 
                    //element coming in the vector with this 
                    //base row and base col.
                    
                    vector<pair<int,int>>vec;//Stores the relative .
                    //positions of the Neighbouring lands with respect to 
                    //the origin of the island for this entire dfs.
                    dfs(i,j,grid,visited,vec,base_row,base_col);
                    st.insert(vec);
                }
            }
        }
        
        return st.size();
    
    }
};
