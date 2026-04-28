class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        
        //1.Queue 2.vector which stores Queue visited elements. 3.vector<>
      
      vector<int>ans;//To keep track of the visited queue elements.
      queue<int>q;
      vector<bool>visited(adj.size(),false);
        
     q.push(0);       
     visited[0] =  true;
     
     while(!q.empty())
     {
        ans.push_back(q.front());//In General.
        q.pop();//[]
        
        //We will go to the adjacency list of the ans[last element]
        for(auto it : adj[ans[ans.size()-1]])
        {
            if(!visited[it])
            {
                visited[it] = true;
                q.push(it);
            }
        }
     }
        return ans;
        
    }
};