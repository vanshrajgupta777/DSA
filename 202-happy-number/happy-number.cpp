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
            int slow = n;
            int fast = n;

            n = f(n);
            do{
                slow = f(slow);
                fast = f(f(fast));
            }while(slow!=fast);
        return slow==1;
        
        
    }
};