class Solution {
  public:
  
    int activitySelection(vector<int> &start, vector<int> &finish) {
        
        //Greedily, we should take the meeting that ends the first.So that 
        //Maximum time is remaining after that very early ending activity.
        //So, that we can arrange many other activities possible.
        
        int req_index = 0;
        vector<pair<int,int>>activities(start.size());
        
        for(int i = 0;i < finish.size();i++) {
            activities[i] = {finish[i],start[i]};//activities[i] = {finish,start}.
        }
        
        sort(activities.begin(),activities.end());//sort these pairs based on their 
        //finish time.
        
        int meetings = 1;//1.
        
        for(int i = 1;i < activities.size();i++) {
            
            if(activities[i].second > activities[req_index].first) {
                meetings++;//
                req_index = i;//1 
            }
        
        }
            
        return meetings;
        //TC : O(n*logn)
        //SC : O(n)
        
    
    }
};