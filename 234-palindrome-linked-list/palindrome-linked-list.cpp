class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        vector<int> ans;

        while(temp != NULL) {
            ans.push_back(temp->val);
            temp = temp->next;
        }

        int i = 0;
        int j = ans.size() - 1;

        while(i < j) {
            if(ans[i] != ans[j]) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};