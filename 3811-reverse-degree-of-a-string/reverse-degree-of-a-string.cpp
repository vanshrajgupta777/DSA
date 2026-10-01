class Solution {
public:
    int reverseDegree(string s) {
        
        int pdt = 0;
        for(int i = 0;i<s.length();i++){
            pdt += (27-(s[i]-96))*(i+1);
        }
        return pdt;
    }
};