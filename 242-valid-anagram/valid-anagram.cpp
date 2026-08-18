class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> f;
        unordered_map<char,int> k;
        for(int i = 0; i<s.length();i++){
            f[s[i]]++;
        }
        for(int i = 0;i<t.length();i++){
            k[t[i]]++;
        }
        if (f==k) return true;
        else return false;
    }
};