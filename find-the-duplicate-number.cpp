class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int n= nums.size();
    int ans = 0 ;
    sort(nums.begin(), nums.end());
    for(int i =1; i<n; i++){
       if(nums[i] == nums[i-1]){
        return nums[i];
       }
    }
    
     return -1;
    }
};