class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        v.push_back(-1);
        v.push_back(-1);
        int start =0 , end = nums.size() -1  ;
       
        int mid = (start+end)/2;
        
        //first occurences 
        while(start <= end){
           
            int mid = (start+end)/2;

            if(nums[mid] == target){
                v[0] = mid;
                end = mid - 1 ;
            }
            else if(nums[mid] < target){
                start = mid +1;
            }
            else{
                end  = mid - 1;
            }
        }
        //last occurences 
        start = 0, end = nums.size()-1;
         
         while(start <= end){
            
            int mid = (start+end)/2;

            if(nums[mid] == target){
                v[1] = mid;
                start = mid + 1 ;
            }
            else if(nums[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return v;
    }
};