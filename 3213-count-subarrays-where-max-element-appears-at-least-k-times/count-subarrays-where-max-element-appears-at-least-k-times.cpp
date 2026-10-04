class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int mx = *max_element(nums.begin(), nums.end());

        int l = 0;
        int cnt = 0;
        long long ans = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == mx)
                cnt++;

            while (cnt >= k) {
                ans += nums.size() - i;

                if (nums[l] == mx)
                    cnt--;

                l++;
            }
        }

        return ans;
    }
};