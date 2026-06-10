class Solution {
  public:
    bool checkKthBit(int n, int k) {
      
      //Brute force :
    
      vector<int>binary;
      //Dividing successively by base in which i wanted to convert.
      while(n > 0)
      {
        int remainder = n%2;//001;1
        binary.push_back(remainder);//001;1
        n/=2;//1;0
      }
      
      //0010000000000000000
      //0000000000000100
      
      for(int i = 0;i < binary.size() ; i++)
      {
          if(i == k && binary[i] == 1)
          {
                return true; 
          } 
      }
      
      return false;
        
    }
};