class Solution {
  public:
    
    //
    int find(int deadline,vector<int>& max_empty_space) {
            
        if(max_empty_space[deadline] == deadline) {
            return deadline;
        }    
        
        return max_empty_space[deadline] = find(max_empty_space[deadline],max_empty_space);
        
    }
    
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
       
       int n = deadline.size();
       vector<pair<int,int>>jobs(n);
       
       for(int i = 0;i < n;i++) {
            jobs[i] = {profit[i],deadline[i]};
       }
       
       sort(jobs.rbegin(),jobs.rend());//O(n*logn)
       
       //1.Job that has delayed time == D do it at the max availanle slot which 
       //is closest to D from the left.i.e at the maximum possible time.So there 
       //will remain some slots for the lesser Deadline activities to be completed.
       
       vector<int>max_empty_space(n+1,0);
       
       for(int i = 1;i <= n;i++) {
           max_empty_space[i] = i;
       }
       
       
       int max_jobs = 0;
       int max_profits = 0;
       
       for(int i = 0;i < n;i++) {
            
           //Find where the empty slot is present for each jobs[i].
           
           int slot = find(jobs[i].second,max_empty_space);
           //Recursion + Memoization.//O(1)
           
           if(slot == 0) {
               continue;
           }
           max_jobs++;
           max_profits += jobs[i].first;
           max_empty_space[slot] = slot-1;
           
       }//O(n)
       
       return {max_jobs,max_profits};
       
       //TC : O(n*logn)
       //SC : O(n)
       
    }
};