class Solution {
  public:
  
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        
        unordered_map<int,vector<pair<int,int>>>adj_list;
        
        for(int i = 0;i < edges.size();i++) {
            
            int u = edges[i][0];
            int v = edges[i][1];
            int weight = edges[i][2];
            
            adj_list[u].push_back({v,weight});
            adj_list[v].push_back({u,weight});
            
        }
        
        vector<int>ans_distance(V,INT_MAX);//[]
        
        vector<int>visited(V,0);//[]
        
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
       
        int parent_node = -1;
        pq.push({0,{src,parent_node}});//{0,{0,-1}}.
        
        ans_distance[src] = 0;//

        while(!pq.empty()) {
            
            int weight = pq.top().first;//0.4.
            int curr_node = pq.top().second.first;//0.1.
            int parent_node = pq.top().second.second;//-1.0.
            
            //In the priority_Queue.We are pushing the weight from the 
            //parent node of that particular node.
            //But if we wanted is the *Min_distance from the source node.
        
            pq.pop();
            
            if(visited[curr_node] == 1) {
                continue;
            }            
            
            else {
            
                visited[curr_node] = 1;//1. 
                
                for(auto it : adj_list[curr_node]) {
                    
                    int u = it.first;//1. 4. 2.
                    int weight = it.second;//4. 6. 6.
                     
                    //If the adjacent element is not visited than we need to 
                    //push the minimum distance of that node from the source node.
                    
                    if(visited[u] == 0) {
                        //i.e it's shortest distance from the source node is not yet finalized.
                        
                        if(ans_distance[u] > ans_distance[curr_node] + weight) {
                            ans_distance[u] = ans_distance[curr_node] + weight;
                        }
                        
                        pq.push({ans_distance[u],{u,curr_node}});
                        
                        //Now the ans_distance[u] will be the shortest distance
                        //of that node u from the source node.
                    }
        
                }
            
            }
            
        }
        
        
        return ans_distance;
        
        
    }
};