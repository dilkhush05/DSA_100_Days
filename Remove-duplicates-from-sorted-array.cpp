class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 1;
        int s = nums.size();
        for(int i = 1; i < s; i++){
            if(nums[i-1] != nums[i]){
                nums[index] = nums[i];
                 index++;
            }
        }

    return index;  
    }
};