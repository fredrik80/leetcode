# 21. Merge Two Sorted Lists
# Easy

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dummy = new ListNode(0);
        ListNode *p1 = list1;
        ListNode *p2 = list2;
        ListNode *curr = dummy;

        while (p1 != nullptr || p2 != nullptr){
            if (p2 == nullptr || (p1 != nullptr && p1->val <= p2->val))
            {
                curr->next = p1;
                p1 = p1->next;
            }
            else
            {
                curr->next = p2;
                p2 = p2->next;
            }
            curr = curr->next;

        }

      return dummy->next;
    }
};
