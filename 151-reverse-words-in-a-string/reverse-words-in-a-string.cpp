class Solution {
public:
    string reverseWords(string s) {
        int curr = 0;
        stack <string> ans;
        ans.push("");
        for(int i = 0; i < s.length() ; i++){
            if(s[i] == ' '){
                ans.push("");
                
                continue;
            }
            ans.top()+=s[i];
            
        }
        string re = "";
        while(!ans.empty()){
            if(ans.top() != "") {
                if(re != "") re += " ";
                re += ans.top();
            }
            ans.pop();
        }
        return re;
    }
};