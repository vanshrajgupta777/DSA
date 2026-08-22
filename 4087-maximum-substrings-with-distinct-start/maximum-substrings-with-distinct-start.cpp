class Solution {
public:
    int maxDistinct(string s) {
        int mx = 0;
        unordered_map<char,int> mpp;
        int l = 0 , r = 0;
        for(char x:s){

            mpp[x]++;
        
        }
        return mpp.size();
    }
};