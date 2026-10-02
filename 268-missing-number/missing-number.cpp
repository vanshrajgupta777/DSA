class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        for(;i<nums.size();i++){
            if(i>0 && nums[i]-nums[i-1]>1){
                return int((nums[i]+nums[i-1])/2);
            }
        }
        if(nums[0]!=0){
            return 0;
        }
        return nums[i-1]+1;
    }
};