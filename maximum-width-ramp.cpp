class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftMin(n);
        vector<int> rightMax(n);
        
        leftMin[0] = nums[0];
        for (int i = 1; i < n; i++)
            leftMin[i] = min(leftMin[i - 1], nums[i]);
        
        rightMax[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; --i)
            rightMax[i] = max(rightMax[i + 1], nums[i]);
        
        int i = 0, j = 0, maxWidth = 0;
        while (i < n && j < n) {
            if (leftMin[i] <= rightMax[j]) {
                maxWidth = max(maxWidth, j - i);
                j++;
            } else {
                i++;
            }
        }
        
        return maxWidth;
    }
};
