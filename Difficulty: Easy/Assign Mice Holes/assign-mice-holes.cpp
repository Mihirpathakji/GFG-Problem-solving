class Solution {
  public:
    int assignHole(vector<int>& mices, vector<int>& holes) {
      
        sort(mices.begin(),mices.end());
        sort(holes.begin(),holes.end());
        
        int n = mices.size();
        
        int min_time = 0;
        
        for(int i = 0;i < n;i++) {
            min_time = max(min_time,abs(mices[i] - holes[i]));//Maximise the Distance between 
            //the most adjacent holes and mices.
        }
        
        return min_time;
        
        //TC : O(n*logn)
        //SC : O(1)
      
    }
};