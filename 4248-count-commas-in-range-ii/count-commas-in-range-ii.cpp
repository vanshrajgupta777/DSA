class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000) return 0;
        if(n<1000000) return n-999;
        if(n<1000000000) return 2*n-999999-999;
        if(n<1000000000000) return 3*n-999999999-999999-999;
        if(n<1000000000000000) return 4*n-999999999999-999999999-999999-999;
        
        return 5*n-999999999999999-999999999999-999999999-999999-999;
    }
};