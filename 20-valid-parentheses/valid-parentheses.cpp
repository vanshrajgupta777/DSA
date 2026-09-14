class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for(int i = 0; i < s.length(); i++) {

            if(s[i] == '(') stk.push('(');
            if(s[i] == '{') stk.push('{');
            if(s[i] == '[') stk.push('[');

            if(s[i] == ')') {
                if(!stk.empty() && stk.top() == '(') {
                    stk.pop();
                } else return false;
            }

            if(s[i] == '}') {
                if(!stk.empty() && stk.top() == '{') {
                    stk.pop();
                } else return false;
            }

            if(s[i] == ']') {
                if(!stk.empty() && stk.top() == '[') {
                    stk.pop();
                } else return false;
            }
        }

        if(!stk.empty()) return false;

        return true;
    }
};