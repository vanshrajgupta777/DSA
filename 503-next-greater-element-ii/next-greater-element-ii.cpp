class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> stk;
        vector<int> ans(nums.size());
        for(int i =nums.size()-1;i>=0;i--){
            if(stk.empty()){
                ans[i] = -1;
                stk.push(i);
                continue;
            }
            if(nums[i]<nums[stk.top()]){
                ans[i] = nums[stk.top()];
                stk.push(i);
            }else{
                stk.pop();
                i++;
            }

        }
        for(int i =nums.size()-1;i>=0;i--){
            if(stk.empty()){
                ans[i] = -1;
                stk.push(i);
                continue;
            }
            if(nums[i]<nums[stk.top()]){
                ans[i] = nums[stk.top()];
                stk.push(i);
            }else{
                stk.pop();
                i++;
            }

        }        
        return ans;
    }
};