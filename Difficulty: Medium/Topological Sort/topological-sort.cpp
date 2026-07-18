//JAY SHREE RAM.
class Solution {
  public:
  
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        
        //Kahn Algorithm :- (BFS of Topological sort)
        
        
        unordered_map<int,vector<int>>adj_list;
        
        for(int i = 0;i < edges.size();i++) {
                    
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj_list[u].push_back(v);
                
        }
        
        vector<int>indegree(V,0);//
        
        for(int i = 0;i < edges.size();i++) {
            int v = edges[i][1];//v has an inward edge for every u-v edge.
            indegree[v]++;
        }
        
        //Step1 ://Push all elements with indegree = 0 in the q i.e
        //push all possibles u.
        
        queue<int>q;
        
        for(int i = 0;i < V;i++) {
            if(indegree[i] == 0) {
                q.push(i);//These are all possible u.
            }
        }
    
        //q =  [1 2 3].
        vector<int>ans;
        
        while(!q.empty()) {
            
            int node = q.front();// 1 2 3 0 
            q.pop();//
            
            if(indegree[node] == 0) { 
                ans.push_back(node);// [1 2 3 0 ] .    
            }
            
            for(auto& v : adj_list[node]  ) { 
                
                if(indegree[v] == 0) { 
                    q.push(v);
                }
                else {
                    indegree[v]--;//2 1 0 
                    if(indegree[v] == 0) {
                        q.push(v);//[0].
                    }
                }
                
            }
            
        }
        
        return ans;
        
        //TC : O(V + E)
        //SC : O(V)
        
    }
};