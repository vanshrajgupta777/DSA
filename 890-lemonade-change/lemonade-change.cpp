class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int> mpp;
        for(int i =0;i<bills.size();i++){
            if(bills[i]==5){
                mpp[5]++;
            }else if(bills[i]==10){
                if(mpp.contains(5)&&mpp[5]>0){
                    mpp[10]++;
                    mpp[5]--;
                }else return false;
            }else{
                if(mpp.contains(10)&&mpp[10]>0&&mpp.contains(5)&&mpp[5]>0){
                
                    mpp[10]--;
                    mpp[5]--;
                    mpp[20]++;
                    
                }else if(mpp.contains(5)){
                    if(mpp[5]>=3){
                        mpp[5]-=3;
                        mpp[20]++;
                    }else return false;
                }else return false;
            }
        }
        return true;
    }
};