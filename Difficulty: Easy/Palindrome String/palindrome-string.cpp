class Solution {
  public:
  
  void checkpalindrome(int i,string&s,int n)
  {
      if(i>=n/2)// n==3
      {
          return;
      }
       char temp=s[i];
       s[i]=s[n-i-1];
       s[n-i-1]=temp;
       checkpalindrome(++i,s,n);//(1,hello,6,hell)
  }
  
    bool isPalindrome(string& s)
    {
        int i=0;
        int n=s.size();// 6 
        string a=s;// string of size n 
        checkpalindrome(i,s,n);// (0,hello,6,hello)
        return a==s;
        
        //Tc:O(n) && Sc:O(n) 
    }
};