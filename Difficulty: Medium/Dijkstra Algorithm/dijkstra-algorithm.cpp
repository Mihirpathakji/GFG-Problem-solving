class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {

        vector<int>visited(V,0);
        
        unordered_map<int,vector<pair<int,int>>>mp;
        for(auto vec : edges) {
            
            int u = vec[0];//0
            int v = vec[1];//1
            
            int weight = vec[2];//1
            
            mp[u].push_back({v,weight});
            mp[v].push_back({u,weight});
            
        }
        
        
        vector<int>shortest_distance(V,INT_MAX);
        shortest_distance[src] = 0;
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>Min_heap;
        //dist to src, node.
        
        
        Min_heap.push({0,src});
        
        while(!Min_heap.empty()) {
            
            int node = Min_heap.top().second;
            Min_heap.pop();
            
            if(visited[node] == 1) {
                continue;
            }
            
            visited[node] = 1;
            
            //Relax the Unvisited adjacent node.
            
            for(auto vec : mp[node]) {
                
                int v = vec.first;
                int weight = vec.second;
                
                if(visited[v] == 1) {
                    continue;
                }
                
                if(shortest_distance[v] > shortest_distance[node] + weight) {
                    shortest_distance[v] = shortest_distance[node] + weight;
                    Min_heap.push({shortest_distance[v],v});
                }
            }
        
        }
        
        return shortest_distance;
    

    }
};