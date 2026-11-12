class Solution {
public:

    int solve(vector<int>& points, int i, vector<int>& dp) {

        if(i >= points.size()) return 0;

        if(dp[i] != -1) return dp[i];

        int pick = points[i] + solve(points, i+2, dp);

        int notPick = solve(points, i+1, dp);

        return dp[i] = max(pick, notPick);
    }

    int deleteAndEarn(vector<int>& nums) {

        int maxi = *max_element(nums.begin(), nums.end());

        vector<int> points(maxi+1, 0);

        for(int i = 0; i < nums.size(); i++) {
            points[nums[i]] += nums[i];
        }

        vector<int> dp(maxi+1, -1);

        return solve(points, 0, dp);
    }
};