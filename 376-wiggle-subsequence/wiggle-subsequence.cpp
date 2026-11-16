class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        if(n == 0) return 0;

        int i = 0;
        int j = i + 1;

        while(j < n) {
            int num = nums[j] - nums[i];
            ans.push_back(num);

            i++;
            j++;
        }

        int cnt = 1;
        int k = 0;
        int m = k + 1;

        int prev = 0;

        while(k < ans.size()) {

            if(ans[k] > 0) {
                if(prev != 1) {
                    cnt++;
                    prev = 1;
                }
            }

            else if(ans[k] < 0) {
                if(prev != -1) {
                    cnt++;
                    prev = -1;
                }
            }

            k++;
        }

        return cnt;
    }
};