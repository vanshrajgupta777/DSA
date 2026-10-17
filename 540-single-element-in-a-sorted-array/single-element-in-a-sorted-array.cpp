class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if(mid == nums.size()-1 || mid == 0) return nums[mid];
            if(mid!=nums.size()-1 && mid!=0 && nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
                return nums[mid];

            }
            if(nums[mid]==nums[mid+1]){
                if((high-mid-1)%2==0){
                    high = mid -1;
                }else{
                    low = mid+2;
                }
            }
            else if(nums[mid]!=nums[mid+1]){
                if((high - mid)%2==0){
                    high = mid;
                }else{
                    low = mid+1;
                }
            }
        }

        return nums[mid];
    }
};