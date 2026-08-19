class Solution {
public:
    string frequencySort(string s) {
        vector <pair<int , char>> arr(123);
        for(char x:s){
            arr[x].first++;
            arr[x].second = x;
        }
        sort(arr.begin(),arr.end() , greater<pair<int,char>>());
        string ans ="";
        for(pair<int,char> x: arr){
            for(int i = 0 ;i<x.first;i++){
                ans+=x.second;
            }
        }
        
        return ans;
    }
};