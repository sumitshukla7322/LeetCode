class Solution {
public:

    int solve(string &s, int i, int n,vector<int>&dp) {
        if(dp[i]!=-1)return dp[i];

        if(i == n) return 1;

        if(s[i] == '0') return 0;

        int res = solve(s, i+1, n,dp);
        

        if(i+1 < n && (s[i] == '1' || 
           (s[i] == '2' && s[i+1] <= '6'))) {

            res += solve(s, i+2, n,dp);
        }

        return dp[i]= res;
    }

    int numDecodings(string s) {
        vector<int>dp(101,-1);

        int n = s.length();

        return solve(s, 0, n,dp);
    }
};