class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> s;
        vector<int> m;
        vector<int> l;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]<pivot) s.push_back(nums[i]); 
            if(nums[i]>pivot) l.push_back(nums[i]); 
            if(nums[i]==pivot) m.push_back(nums[i]); 
        }
        s.reserve(s.size() + m.size() +l.size());
        s.insert(s.end() , m.begin() , m.end());
        s.insert(s.end() , l.begin() , l.end());

        return s;
    }
};