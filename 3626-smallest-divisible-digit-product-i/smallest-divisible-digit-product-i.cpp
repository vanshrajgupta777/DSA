class Solution {
public:

    bool good(long long x, int t) {
        long long prod = 1;

        while (x) {
            int d = x % 10;
            if (d == 0) return true;    
            prod *= d;
            x /= 10;
        }

        return prod % t == 0;
    }

    int smallestNumber(int n, int t) {
        
    long long ans = n;
    while (!good(ans, t))
        ans++;

    return ans;
    }   
};