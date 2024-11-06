class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            
           if (nums[mid] > nums[mid + 1]) {
                high = mid;
            } else {
                // Peak is to the right of mid
                low = mid + 1;
            }
        }
        
        // At the end of the loop, low == high and points to a peak element
        return low;
    }
};
