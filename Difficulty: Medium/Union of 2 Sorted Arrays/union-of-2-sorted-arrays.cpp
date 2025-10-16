class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
       
       int n1=a.size();    
       set<int>a1; 
       for(int i=0;i<n1;i++)
       {
            a1.insert(a[i]);
       }
        
        //a1 contains All the Unique elements of the vector a 
        
        int n2=b.size();
        set<int>b1;
        for(int i=0;i<n2;i++)
        {
            b1.insert(b[i]);
        }
        
        //b1 contains all the UNIQUE elements of the vector b    
        
        set<int>ans;
        
        ans.insert(a1.begin(),a1.end());
        
        ans.insert(b1.begin(),b1.end());
        
        vector<int>findunion;
        
        findunion.assign(ans.begin(),ans.end());   
        
        return findunion;
        
    }
};