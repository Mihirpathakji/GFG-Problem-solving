class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
    
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;//Min Heap.
        
        unordered_map<int,vector<pair<int,int>>>adj_list;
        vector<int>visited(V,0);
    
        for(int i = 0;i < edges.size();i++) {
            
            int u = edges[i][0];
            int v = edges[i][1];
            
            int wt = edges[i][2];
            
            adj_list[u].push_back({v,wt});
            adj_list[v].push_back({u,wt});
            
        }
        
        vector<int>ans_distance(V,INT_MAX);
        ans_distance[src] = 0;
        
        pq.push({0,src});
        
        while(!pq.empty()) {
            
            int node = pq.top().second;
            int distance = pq.top().first;
            pq.pop();
            
            if(visited[node] == 1) {
                continue;
            }
            else {
                visited[node] = 1;
                
                //Relax the Edges.
                
                for(auto& v : adj_list[node]) {
                    
                    int vertex = v.first;
                    int weight = v.second;
                    
                    if(visited[vertex] == 0 && ans_distance[node]!=INT_MAX) {
                        if(ans_distance[vertex] > ans_distance[node] + weight) {
                            ans_distance[vertex] = ans_distance[node] + weight;
                            pq.push({ans_distance[vertex],vertex});
                        }
                    }
                }
            }
            
        }
        
        for(int i = 0;i < V;i++) {
            if(ans_distance[i] == INT_MAX) {
                ans_distance[i] = -1;
            }
        }
        
        return ans_distance;
        
        

    }
};