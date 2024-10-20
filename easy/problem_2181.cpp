class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* new_node = new ListNode();
        ListNode* result = new_node;

        while (head != nullptr)
        {
            if (head->val == 0 && head->next != nullptr)
            {
                new_node->next = new ListNode(0);
                new_node = new_node->next;
            }
            else
            {
                new_node->val += head->val;
            }
            head = head->next;
        }
        return result->next;
    }
};