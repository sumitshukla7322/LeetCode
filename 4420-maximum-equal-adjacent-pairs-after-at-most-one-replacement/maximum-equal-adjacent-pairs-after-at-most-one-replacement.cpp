class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        int n = nums.size();

        vector<int> selunaviro = nums;

        int base = 0;
        unordered_map<int, unordered_map<int, int>> mp;

        for (int i = 0; i < n - 1; i++) {
            int a = nums[i];
            int b = nums[i + 1];

            if (a == b) {
                base++;
            } else {
                mp[a][b]++;
                mp[b][a]++;
            }
        }

        int ans = base;

        for (auto &it : mp) {
            for (auto &p : it.second) {
                ans = max(ans, base + p.second);
            }
        }

        return ans;
    }
};