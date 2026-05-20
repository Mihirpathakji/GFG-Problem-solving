// User function template for C++
class Solution {
  public:
  
    bool allZeroes(vector<int>& Counter)
    {
        for(int i = 0 ; i < Counter.size(); i++)
        {
            if(Counter[i]!=0)
            {
                return false;
            }
        }
        
        return true;
    }
    
    int search(string &pat, string &txt) {
        
        //Frequency array for the pat string.
        
        vector<int>Counter(26,0);
        for(int i = 0 ; i < pat.size(); i ++)
        {
            Counter[pat[i]-'a']++;
        }

        //Two pointers i,j for sliding window 
        int i = 0;
        int j = 0;
        int ans = 0;
        
        int n = txt.size();
        int k = pat.size();
        while(j < n)
        {
            //element at the index j will always be in the window.So decrease it's frequency in frequency array.
            
            Counter[txt[j] -'a']--;
        
            if(j - i + 1 == k)
            {
                if(allZeroes(Counter))
                {
                    ans++;   
                }
                Counter[txt[i] -'a']++;//We are leaving txt[i] from the window.So increment it's count in frequency array.
                i++;
            }
            
            j++;
            
        }
        
        return ans;
        
        //TC : O(n)
        //SC : O(1)
        
    }
};