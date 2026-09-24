class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> stk;
        vector<int> ans;
        for(auto x:nums1){
            int j;
            
            for(int i =0;i<nums2.size();i++){
                if(nums2[i]==x){
                j=i;
                break;   
                }
            }
            int i = j+1;
            for(;i<nums2.size();i++){
                if(nums2[i]>nums2[j]){
                    ans.push_back(nums2[i]);
                    
                    break;
                } 
            }
            if(i==nums2.size()){
                ans.push_back(-1);
            }
        }
        return ans;
        
    }
};