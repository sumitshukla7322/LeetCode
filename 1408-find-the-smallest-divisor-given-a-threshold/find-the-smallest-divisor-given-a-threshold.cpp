class Solution {
public:
    bool smaller(vector<int>& nums, int threshold, int mid) {
        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {
            ans += (nums[i] + mid - 1) / mid;
        }

        if(ans <= threshold) {
            return true;
        }
        else {
            return false;
        }
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int lo = 1;
        int hi = *max_element(nums.begin(), nums.end());

        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            if(smaller(nums, threshold, mid)) {
                hi = mid - 1;
            }
            else {
                lo = mid + 1;
            }
        }

        return lo;
    }
};