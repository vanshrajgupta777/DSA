class Solution {
public:
    bool rotateString(string s, string goal) {
        int i = 0;
        for(int j = 0;j<s.size();j++){
            
            if (s == goal) return true;
            else {
                char temp = s[i];
                s.erase(i,1);
                s+=temp;
                
            }
        }
        return false;
    }
};