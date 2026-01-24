class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        
        long long  n = arr.size();
        vector<long long>prefix_sum(n,0);
        
        prefix_sum[0] = arr[0];
        
        for(int i=1;i<n;i++)
        {
            prefix_sum[i] = prefix_sum[i-1] + arr[i];
        }
        
        // Subarray sum equal k == 0 can be checked in two ways :
        //1.prefix_sum at any index comes out to be == k ==0.i.e any "Prefix_arr" was making an sum == k==0
        //2.Any Previous Subarray segment sum was becoming == k ==0.i.e "Any subarray in the array which was "NOT A PREFIX ARRAY" i.e Any " segment subarray" was having sum == k
        
        long long count=0;
        
        //<Key,value> = <Prefix_sum[j],Frequency>
        
        unordered_map<long long ,long long>mp;
        
        for(int j=0;j<n;j++)
        {
            //Case 1: 
            if(prefix_sum[j] == 0)
            {
                count++;//1
            }
            
            //Case 2: Any "subarray segment sum" which was "not a prefix subarray any subarray in between points to an array " has sum == 0 
        
            //Then Keep "Track of number" of such subarrays that was giving a subarray sum == k == 0.To keep  a TRACK OF NUMBER OF SUCH SUBARRAYS OPTIMALLY WE WILL USE unordered_map since in unordered_map all the Operations Occurs in O(1) Time on Average.
            //Gitu's Techniue to keep track of number of occurence of any thing in an array  in O(1).
            
            long long value = prefix_sum[j];//0 5 10 
            
            if(mp.find(value)!=mp.end())
            {
                //This prefix_sum[j] had occured previously also.
                count += mp[value];
            }
            
            //O(1) time for unordered_map to find any value on average
            
            //If it is present than increment it's count from 1 to 2 or 2 to 3  i.e by one 
            //If it is not present already than made it's count 1 from 0 i.e Increment the count by one.
            
            //Whethere present or not present in the map already increment it's frequency by 1 i.e If not present than made it's frequency ==1 i.e made it present or if already present in the map than increment it's frequency by one
            mp[prefix_sum[j]]++;//O(1) time for insertion since unordered_map
        }
        
        //TC:O(n)
        //SC:O(n)//map,prefix_sum
        
        return count;
        
    }
};