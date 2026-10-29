class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int cnt = 0;
        int k=0;
        if(s.size()==0) return 0;
        for(int i =0;i<g.size();i++){
            if(g[i]<=s[i+k]){
                cnt++;
            }else{
                k++;
                i--;
            }
            if(i+k==s.size()-1) break;
        }
        return cnt;
    }
};