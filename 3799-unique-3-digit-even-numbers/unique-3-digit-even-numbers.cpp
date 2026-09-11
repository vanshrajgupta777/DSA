class Solution {
public:

    struct ArrayHash {
        size_t operator()(const array<int, 3>& a) const {
            return a[0] * 100 + a[1] * 10 + a[2];
        }
    };

    int totalNumbers(vector<int>& digits) {
        int cnt = 0;

        unordered_map<array<int, 3>, int, ArrayHash> mp;

        for(int i = 0; i < digits.size(); i++) {
            for(int j = 0; j < digits.size(); j++) {
                for(int k = 0; k < digits.size(); k++) {

                    if(i == j || j == k || i == k ||digits[i]==0)
                        continue;

                    array<int, 3> key = {digits[i], digits[j], digits[k]};

                    if(!mp.contains(key) && digits[k] % 2 == 0) {
                        cnt++;
                        mp[key]++;
                    }
                }
            }
        }

        return cnt;
    }
};