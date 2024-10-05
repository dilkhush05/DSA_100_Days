class Solution {
public:
    int missingNumber(vector<int>& nums) {
       vector<int>ans;
       int n = nums.size();
       int expectedsum = n*(n+1)/2;
       int currsum = 0;
       for(int i =0;i <n; i++){
        currsum += nums[i];
       } 
       return expectedsum - currsum;
    }
};