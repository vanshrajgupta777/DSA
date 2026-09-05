class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
         int n = nums.size();

        if (n == 0) return -1;

        vector<pair<int,int>> p(n);

        int mx = INT_MIN;
        int mn = INT_MAX;
        int j = n - 1;

        for (int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
            p[i].first = mx;

            mn = min(mn, nums[j]);
            p[j].second = mn;
            j--;
        }

        for (int i = 0; i < n; i++) {
            if (p[i].first - p[i].second <= k) {
                return i;
            }
        }

        return -1;
    }
};