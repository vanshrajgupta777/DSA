class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        #define a nums
        int c = -1;
        int mid;
        if(nums.size()==1){
            if(a[0]==target) return 0;
            else return -1;
        }
        if(a[0]<=a[nums.size()-1]){
            l = 0;
            r = nums.size()-1;
            while(l<=r){
                mid = l + (r-l)/2;
                if(a[mid] == target){
                    return mid;
                }
                else if(a[mid]>target){
                    r = mid - 1;
                }else{
                    l = mid + 1;
                }
            }
        }
        while(l<r){
            mid = l + (r-l)/2;
            if (nums[mid] > nums[r]) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        c = l;
        if(target >= a[0] && target <= a[c-1]){
            l = 0;
            r = c-1;
            while(l<=r){
                mid = l + (r-l)/2;
                if(a[mid] == target){
                    return mid;
                }
                else if(a[mid]>target){
                    r = mid - 1;
                }else{
                    l = mid + 1;
                }
            }
        }else{
            l = c;
            r = nums.size()-1;
            while(l<=r){
                mid = l + (r-l)/2;
                if(a[mid] == target){
                    return mid;
                }
                else if(a[mid]>target){
                    r = mid - 1;
                }else{
                    l = mid + 1;
                }
            }
        }
        return -1;
    }
};