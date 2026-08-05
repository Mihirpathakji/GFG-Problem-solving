class Solution {
  public:
    
    void toposort(int node,unordered_map<int,vector<pair<int,int>>>& mp,vector<int>&visited,stack<int>&st) {
        
        visited[node] = 1;//1.  1.  1.  1.
        
        for(auto& v : mp[node] ) {
            if(visited[v.first] == 0){
                toposort(v.first,mp,visited,st);//(0).
            }
        }
        
        st.push(node);//  5.4.0.6.
        
    }
  
    vector<int> shortestPath(int V, vector<vector<int>>& edges) {
    
        //DAG : Toposort.
    
        unordered_map<int,vector<pair<int,int>>>mp;
            
        int n = edges.size();
        for(int i = 0;i < edges.size();i++) {
            mp[edges[i][0]].push_back({edges[i][1],edges[i][2]});
        }
            
        //Find the topo sort.
        
        vector<int>visited(V,0);
        stack<int>st;
        
        for(int i = 0;i < V;i++) {
            if(visited[i] == 0) {
                toposort(i,mp,visited,st);
            }
        }
        
        //[6 0 4 5 1 2 3]
        
        vector<int>ans_distance(V,INT_MAX);
        ans_distance[0] = 0;
        
        //1.St.top() will always be the source node.
        
        while(!st.empty()) {
            
            int node = st.top();//0. 4. 5. 1. 2 3.8.
            st.pop(); 
            
            //{1,2},{4,1}. // {{5,4},{2,2}}. {2,3}.
            
            for(auto& v : mp[node]) {
    
                int vertex = v.first;//1. 4.  //5. 2. 3. 2. 3.9.
                int curr_wt = v.second;//2. 1.//4. 2. 1. 3. 6.1.
                
                if(ans_distance[node]!=INT_MAX && ans_distance[node] + curr_wt  < ans_distance[v.first]) {
                    ans_distance[v.first] = ans_distance[node] + curr_wt;//2. 
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
