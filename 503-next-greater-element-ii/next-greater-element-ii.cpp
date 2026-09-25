class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> stk;
        int n = nums.size();
        vector<int> ans(nums.size());
        for(int j =n*2-1;j>=0;j--){
            int i = j%n;
            if(stk.empty()){
                ans[i] = -1;
                stk.push(i);
                continue;
            }
            if(nums[i]<nums[stk.top()]){
                ans[i] = nums[stk.top()];
                stk.push(i);
                continue;
            }else{
                while(!stk.empty()&& nums[stk.top()]<=nums[i]) stk.pop();
                if(stk.empty()){
                    ans[i] = -1;
                }else{
                    ans[i]=nums[stk.top()];
                }
                stk.push(i);
            }

        }
   
        return ans;
    }
};