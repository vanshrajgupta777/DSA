class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn = INT_MAX , tr = -1;
        for(int i = 0;i<nums1.size();i++){
            mn = min(mn,nums1[i]);
            if(nums1[i]%2==0 && tr==-1) tr = 0;
            if(nums1[i]%2==0 && tr==1) tr = 3;
            if(nums1[i]%2==1 && tr==-1) tr = 1;
            if(nums1[i]%2==1 && tr==0) tr = 3;

        }
        if(tr==0) return true;
        if(tr==1) return true;
        if(mn%2==1) return true;
        return false;
    }
};