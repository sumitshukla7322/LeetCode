class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int j = 0;

        while (j < n) {

            if (j + nums[j] >= n - 1) {
                return true;
            }

            int end = j + nums[j];
            int next = j;

            for (int i = j + 1; i <= end; i++) {
                if (i + nums[i] > next + nums[next]) {
                    next = i;
                }
            }

            if (next == j) {
                return false;
            }

            j = next;
        }

        return false;
    }
};