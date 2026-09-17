
class Solution {
   
 public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        vector<pair<int,int>> d;
        int x = source[0];
        int y = source[1];

        x = source[0];
        y = source[1];
        char colorb;
        char colort;
        if(x%2 == 1 && y%2 == 1) {
            colorb = 'b';
        }
        else if(x%2 == 0 && y%2 == 0){
            colorb = 'b';
        }
        else colorb = 'w';
        
        x = target[0];
        y = target[1];
        if(x%2 == 1 && y%2 == 1) {
            colort = 'b';
        }
        else if(x%2 == 0 && y%2 == 0){
            colort = 'b';
        }
        else colort = 'w';
        int p = source[0];
        int q = source[1];

        if(colorb != colort ) return -1;
        if(abs(x-p) == abs(y-q)){
            return 1;
        }
        return 2;
    
    }
};