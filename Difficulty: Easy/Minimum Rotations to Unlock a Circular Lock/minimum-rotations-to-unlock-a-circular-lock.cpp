class Solution {
  public:
    
    int rotationCount(int r, int d) {
        
        int min_rotation = 0;
        
        vector<int>r_digits;
        vector<int>d_digits;
    
        
        while(r > 0) {
            int rem1 = r % 10;
            r/=10;
            r_digits.push_back(rem1);
        }
        
        reverse(r_digits.begin(),r_digits.end());
        
         
        while(d > 0) {
            int rem1 = d % 10;
            d/=10;
            d_digits.push_back(rem1);
        }
        
        reverse(d_digits.begin(),d_digits.end());
        
        int r_digits_size = r_digits.size();
        int d_digits_size=  d_digits.size();
        
        vector<int>new_r_digits;
        vector<int>new_d_digits;
        
        bool flag1 = false;
        bool flag2 = false;
        
        if(r_digits_size > d_digits_size) {
            
            flag1 = true;
            int new_appended = r_digits_size-d_digits_size;
            
            for(int i = 0;i < new_appended;i++) {
                new_d_digits.push_back(0);
            }
            
            for(int i = 0;i < d_digits.size();i++) {
                new_d_digits.push_back(d_digits[i]);
            }
            
        }
        
        else if(d_digits_size > r_digits_size) {
            
            flag2 = true;
            int new_appended = d_digits_size - r_digits_size;
            
            for(int i = 0;i < new_appended;i++){
                new_r_digits.push_back(0);
            }
            
            for(int i = 0;i < r_digits.size();i++) {
                new_r_digits.push_back(r_digits[i]);
            }
            
        }
        
        if(!(flag1 || flag2)) {
            new_r_digits = r_digits;
            new_d_digits = d_digits;
        }
        else {
            if(flag1 == true) {
                new_r_digits = r_digits;
            }
            else {
                new_d_digits = d_digits;
            }
        }
        
        for(int i = 0;i < new_r_digits.size();i++) {
            min_rotation += min(abs(new_r_digits[i]-new_d_digits[i]),10-abs(new_r_digits[i]-new_d_digits[i]));
        }
     
     
        return  min_rotation;
     
    }
};