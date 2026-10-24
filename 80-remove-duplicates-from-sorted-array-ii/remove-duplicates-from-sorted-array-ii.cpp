class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt = 0;
        vector<int> ans;
        int p = nums[0];
        for(int i =0;i<nums.size();i++){
            
            if(p==nums[i]&&cnt<2){
                cnt++;
                ans.push_back(nums[i]);
            }
            if(p!=nums[i]){
                p=nums[i];
                cnt=1;
                ans.push_back(nums[i]);
            }
        }
        nums = ans;
        return ans.size();
    }
};