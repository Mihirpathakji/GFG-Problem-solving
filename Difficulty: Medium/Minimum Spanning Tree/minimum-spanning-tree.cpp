class Solution {
  public:
   
    int spanningTree(int V, vector<vector<int>>& edges) {
        
        vector<int>is_in_MST(V,0);
        
        //dp approach:
        
        //Edge : 1.Node 2.Parent 3.Edgeweight
        
        //MinHeap for edges needed.To know whether the edge is already taken or not.
        
        vector<int>parent(V,-1);
        
        unordered_map<int,vector<pair<int,int>>>adj_list;
        
        for(int i = 0;i < edges.size();i++) {
            
            int u = edges[i][0];
            int v = edges[i][1];
            int weight = edges[i][2];
            
            adj_list[u].push_back({v,weight});//{node,weight}.
            adj_list[v].push_back({u,weight});
            
        }
        
        //Min Heap of node,parent_node,weight.
        
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;
        pq.push({{0,0,-1}});//weight,node,parent.Most IMP is the weight.
        //Cost to put on only node 0 is 0.
        
        long long total_cost = 0;
        
        while(!pq.empty()) {
            
            int curr_cost = pq.top()[0];
            int node = pq.top()[1];
            int parent_node = pq.top()[2];
            
            pq.pop();
            
            //curr_node is added into the ans.Now the one with the Minimum
            //number of edges weight.Should be connected with it.
            
            //From this curr_node: Connecdt the node which is having the Minimum edge weight.
        
            if(is_in_MST[node] == 0) {
                

                total_cost += curr_cost;
    
                is_in_MST[node] = 1;
    
                parent[node] = parent_node;
                
                for(auto &v : adj_list[node]) {
                    
                    int child_node = v.first;
                    int weight = v.second;
                    
                    if(is_in_MST[child_node] == 0) {
                        pq.push({weight,child_node,node});
                    }
                    
                }
                
            }
            
        }
        
        return total_cost;
        
        
        
    }
};