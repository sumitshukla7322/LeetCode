class Solution {
public:
    int solve(int n,vector<int>&dp) {

        if(n == 1 || n == 2) {
            return 1;
        }
        if(dp[n]!=-1) return dp[n];

        int maxi = 0;

        for(int i = 1; i < n; i++) {

            int p1 = i * (n - i);

            int p2 = i * solve(n - i,dp);

            maxi = max(maxi, max(p1, p2));
        }

        return dp[n]=maxi;
    }

    int integerBreak(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};