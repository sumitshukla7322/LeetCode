class Solution {
public:

    int solve(vector<int>& nums, int i,vector<int>&dp) {

        int n = nums.size();
        if(dp[i]!=-1) return dp[i];

        if (i == n - 1) {
            return 0;
        }

        int ans = INT_MAX;

        for (int j = 1; j <= nums[i]; j++) {

            if (i + j < n) {

                int temp = solve(nums, i + j,dp);

                if (temp != INT_MAX) {
                    ans = min(ans, 1 + temp);
                }
            }
        }

        return dp[i]= ans;
    }

    int jump(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return solve(nums, 0,dp);
    }
};