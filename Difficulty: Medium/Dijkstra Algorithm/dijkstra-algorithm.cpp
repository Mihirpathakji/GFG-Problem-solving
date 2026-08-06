class Solution {
	public:
	vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
		
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> >pq; // Min Heap.
		
		unordered_map<int, vector<pair<int, int>> >adj_list;
		vector<int>visited(V, 0);
		
		for (int i = 0; i < edges.size(); i++) {
			
			int u = edges[i][0];
			int v = edges[i][1];
			
			int wt = edges[i][2];
			
			adj_list[u].push_back({v, wt});
			adj_list[v].push_back({u, wt});
			
		}
		
		//O(V+2*E)
		
		vector<int>ans_distance(V, INT_MAX);
		ans_distance[src] = 0;
		
		pq.push({0, src}); // {Shortest_distance from source ,node_value}.
		//{dist,node_value}.
		
		while (!pq.empty()) {
		    
		    //O(V).
			
			int node = pq.top().second;//Will give the Shortest Distant node
			//from the source node first.
			
			pq.pop();//log(V).

			if (visited[node] == 1) {
				continue;
			}
			else {
			    
			    visited[node] = 1;
				
				// Relax the Edges.
				
				for (auto& v : adj_list[node]) {
					
					int vertex = v.first;
					int weight = v.second;
					
					//Minimize the shortest distance for the 
					//adjacent nodes of the node.
					
					if (visited[vertex] == 0 && ans_distance[node] != INT_MAX) {
						if (ans_distance[vertex] > ans_distance[node] + weight) {
							ans_distance[vertex] = ans_distance[node] + weight;//4.8.10.
							pq.push({ans_distance[vertex], vertex});//
							//so that Min Heap is formed on the basis of the shortest distance.
					        //O(logV)
						}
					}
					
				}
				
				
			}
			
		}
		
		for (int i = 0; i < V; i++) {
			if (ans_distance[i] == INT_MAX) {
				ans_distance[i] = -1;
			}
		}
		
		return ans_distance;
		//TC : O(E*Logv) == O(V^2logV).
		//We are getting Accepted because Majority of the test cases 
		//given in this problem are the sparse Graphs.
		//i.e Number of the edges are very lessser.
		//E is Approximated not to V^2 But to V.Since the 
		//E is very very lesser in the sparse Graphs.Hence , E APPROX
		// == V.
		
		//SC : O(V + E) <-  IMP. Priority Queue can take the 
		//space upto the number of the edges.
		
	}
};
