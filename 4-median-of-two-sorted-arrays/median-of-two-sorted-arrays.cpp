class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
     vector<int> ans;
      for (int i = 0; i < n; i++) {
    ans.push_back(nums1[i]);
    }

 for (int i = 0; i < m; i++) {
  ans.push_back(nums2[i]);
        }

        sort(ans.begin(), ans.end());

        int slow = 0;
        int fast = 0;

        if (ans.size() % 2 == 1) {
            while (fast + 1 < ans.size()) {
                slow++;
                fast += 2;
            }

            return ans[slow];
        }
        else {
            while (fast + 2 < ans.size()) {
                slow++;
                fast += 2;
            }

            return (ans[slow] + ans[slow + 1]) / 2.0;
        }
    }
};