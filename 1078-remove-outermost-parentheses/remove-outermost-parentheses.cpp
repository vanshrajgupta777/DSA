class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        int c=0;
        string ans = "";
        int in = 1;
        for(int i = 0; i<n;i++){
            
            if(s[i]=='(') {
                if(c!=0) ans+=s[i];
                c++;
            }
            if(s[i]==')') {
                c--;
                if(c!=0) ans+=s[i];
                
            }

        }
        return ans;

    }
};