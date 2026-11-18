class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {

        int n = nums.size();

        if(n <= 2) return n;

        vector<vector<int>> dp(n, vector<int>(2001, 0));

        int res = 2;

        for(int i = 0; i < n; i++) {

            for(int j = i + 1; j < n; j++) {

                int d = nums[j] - nums[i];

                dp[j][d + 500] = max(
                    dp[j][d + 500],
                    dp[i][d + 500] + 1
                );

                if(dp[i][d + 500] == 0) {
                    dp[j][d + 500] = max(dp[j][d + 500], 2);
                }

                res = max(res, dp[j][d + 500]);
            }
        }

        return res;
    }
};