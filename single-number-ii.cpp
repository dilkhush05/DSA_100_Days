class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int ones = 0, twos = 0;
        
        for (int num : nums) {
            
            twos |= ones & num;
            
           
            ones ^= num;
            
            
            int threes = ones & twos;
            ones &= ~threes;
            twos &= ~threes;
        }
        
        return ones; 
    }
};