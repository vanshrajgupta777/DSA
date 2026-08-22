class Solution {
public:
    bool checkDivisibility(int n) {
        int og = n;
        int pdt = 1;
        int s = 0;
        while(n!=0){
            int d = n%10;
            pdt*=d;
            s+=d;
            n/=10;

        }
        int sum = s+pdt;
       // if(sum==0) return false;
       if(og%sum == 0) return true;
       else return false;
    
    }
};