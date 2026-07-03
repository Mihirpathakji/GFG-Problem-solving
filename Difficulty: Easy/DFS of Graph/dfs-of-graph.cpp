class Solution {
  public:
  
    void mydfs(int start,vector<vector<int>>& adj,vector<bool>& visited,vector<int>& ans) {
        
        //Base case for the Recursion : 
        
        if(visited[start] == true) {
            return;
            //If already visited than backtrack.  
        }
        
        if(visited[start] == false) {
            visited[start] = true;
            ans.push_back(start);//3 4
            
            for(auto it : adj[start]) {
                if(visited[it] == false) {
                    mydfs(it,adj,visited,ans);
                }
            }

        }
        
        return;

    }
  
  
    vector<int> dfs(vector<vector<int>>& adj) {
        
        int v = adj.size();
        vector<bool>visited(v,false);
        vector<int>ans;
        
        int start = 0;
        
        mydfs(start,adj,visited,ans);
        
        return ans;
        
            
    }
};