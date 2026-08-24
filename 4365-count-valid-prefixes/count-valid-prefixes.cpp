class Solution {
public:
    int countValidPrefixes(string s) {
        vector <pair<int,int>> p;
        int ans = 0 ,a=0,b=0;
        for(char x :s){
            if(x-'0' == 0) {
                p.push_back({++a,b});
            }else{
                p.push_back({a,++b});
            }
        }
        
        for(int i =0 ;i<p.size();i++){
            if((p[i].first == p[i].second)||
                (p[i].first == p[i].second + 1)||
                    (p[i].first + 1 == p[i].second)){
                ans++;
            }
                    
        }
        return ans;
    }
};