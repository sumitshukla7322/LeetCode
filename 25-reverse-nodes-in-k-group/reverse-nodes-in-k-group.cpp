class Solution {
public:

    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    ListNode* kthNode(ListNode* temp, int k) {
        k = k - 1;

        while (temp != NULL && k > 0) {
            k--;
            temp = temp->next;
        }

        return temp;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* nextNode = head;
        ListNode* prevNode = NULL;

        while (temp != NULL) {

            ListNode* kthNodePtr = kthNode(temp, k);

            if (kthNodePtr == NULL) {
                if (prevNode != NULL)
                    prevNode->next = temp;
                break;
            }

            nextNode = kthNodePtr->next;
            kthNodePtr->next = NULL;

            reverse(temp);

            if (temp == head) {
                head = kthNodePtr;
            }
            else {
                prevNode->next = kthNodePtr;
            }

            prevNode = temp;
            temp = nextNode;
        }

        return head;
    }
};