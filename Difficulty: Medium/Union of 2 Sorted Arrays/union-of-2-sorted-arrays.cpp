class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
       //Using Two Pointer Since we are Given with two arrays we can operate on each one of them
       
       int i=0;
       int j=0;
       vector<int>ans;// empty vector n=0
       //Assinging the first value to the ans :
       
       if(a[i]<b[j])
       {
           ans.push_back(a[i]);
           i++;
       }
       
       else
       {
          ans.push_back(b[j]);
          j++;
       }
       
       while(i<a.size() && j<b.size())
       {
           if(a[i]<b[j])
           {
                if(ans.back()!=a[i])
                {
                    ans.push_back(a[i]);
                }
                i++;
           }
           else
           {
               if(ans.back()!=b[j])
               {
                   ans.push_back(b[j]);
               }
               j++;
           }
       }//O(min(n1,n2))
       
       while(i<a.size())
       {
           //a.size()==10000000 <-IN the WORST CASE O(a.size)==O(n1)
           if(a[i]!=ans.back())
           {
               ans.push_back(a[i]);
           }
           i++;
       }
       
       while(j<b.size())
       {
           //->Worst case -> O(b.size())  -> O(10000000)  == O(n2)
           if(b[j]!=ans.back())
           {
                ans.push_back(b[j]);       
           }
           j++;
       }
       
       return ans;
       
       //Tc : O(n1+n2)
       //SC : O(n1+n2)
       
    }
};