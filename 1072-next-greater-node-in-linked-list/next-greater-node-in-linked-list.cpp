class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        vector<int> ans2;

        ListNode* temp = head;

        while(temp != NULL) {
            ans.push_back(temp->val);
            temp = temp->next;
        }

        int i = 0;
        int j = 1;

        while(i < ans.size()) {

            if(j >= ans.size()) {
                ans2.push_back(0);
                i++;
                j = i + 1;
            }
            else if(ans[j] > ans[i]) {
                ans2.push_back(ans[j]);
                i++;
                j = i + 1;
            }
            else {
                j++;
            }
        }

        return ans2;
    }
};