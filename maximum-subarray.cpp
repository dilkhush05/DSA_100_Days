class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int l = nums.size();
        int m = INT_MIN;
        int n = 0;
        for(int i = 0; i< l ; i++){
            n = n + nums[i];
            if( n > m){
               m = n; 
            }
            if(n  < 0 ){
                n = 0;
            }
        }
        return m;
    }
};