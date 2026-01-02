class Solution {
  public:
    
    bool is_allocat_possible(int min_distance,vector<int>&stalls,int k)
    {
        int cow_count = 1;
        int last_cow_position = stalls[0];
        
        //Check if with this mid == minimum distance are all the k cows getting stalls assigned with minimum distance mid or not. 
        
        for(int i = 1; i<stalls.size() ;i++)
        {
            if(stalls[i]-last_cow_position >= min_distance)
            {
                cow_count++;
                last_cow_position = stalls[i];
            }
            if(cow_count == k)
            {
                //Exactly k cows got stalls assigned within minimum distance of mid.
                return true;
            }
        }
        return false;
    }
  
    int aggressiveCows(vector<int> &stalls, int k) {
    
        //Apply Binary search on Distances 
        
        sort(stalls.begin(),stalls.end());//To get the Minimum distance you need to get the Adjacent positions of the stalls[i].Since the Minimum distance will always occurs between consecutives.        
        //TC : nlogn
       
        int n = stalls.size();
       
        int low = 1; 
        int high = stalls[n-1] - stalls[0];
        
        int mid;
        int ans = 0;
        
        while(low <= high)
        {
            mid = low + (high -low) / 2;
            
            //Check if with this mid as "minimum distance" are the stalls getting assigned to All of the k cows or not ??
            if(is_allocat_possible(mid,stalls,k))
            {
                ans = mid;
                //For the Maximum possible value of this minimum distance mid :
                low = mid + 1;
            }
            else
            {
                high = mid - 1;   
            }
        }//O(log(max(stalls)-min(stalls))*(n)) + O(nlogn)
        return ans;
        
        
        //TC:O(log(max(stalls)-min(stalls))*n)
        //SC:O(1)
    }
};