class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map <char,char> f1;
        unordered_map <char,char> f2;
        
        
        if(s.length() != t.length()) return false;
        for(int i =0;i<s.length();i++){
            if ((!f1.contains(s[i]))&&(!f2.contains(t[i])))  {
                f1[s[i]]=t[i];
                f2[t[i]]=s[i];

            }
            else if(f1[s[i]]!=t[i]) return false;
        }
        return true;

    }
};