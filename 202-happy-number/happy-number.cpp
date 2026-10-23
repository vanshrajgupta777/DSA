class Solution {
public:
    int f(int n){
        string s = to_string(n);
        int ans = 0;
        for(char x :s){
            ans+=(x-'0')*(x-'0');
        }
        return ans;
    }
    bool isHappy(int n) {
        while(true){
            n = f(n);
            if(n == 1) return true;
            if(n<10 && n!=7) return false;
        }
        return true;
    }
};