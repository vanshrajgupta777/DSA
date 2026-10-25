class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto x:nums){
            if(mpp.contains(x)){
                return x;
            }
            mpp[x]++;
        }
        return 0;
    }
};