class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mpp;
        vector<int> ans;
        if(nums1.size()<nums2.size()) swap(nums1,nums2);
        for(int i =0;i<nums1.size();i++){
            mpp[nums1[i]]++;
        }
        for(auto x:nums2){
            if(mpp.contains(x)){
                ans.push_back(x);
                mpp.erase(x);
            }
            
        }
        return ans;
    }
};