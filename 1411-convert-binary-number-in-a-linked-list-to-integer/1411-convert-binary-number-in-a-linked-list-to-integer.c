/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    int integer = 0;
    while (head != NULL)
    {
        integer = integer*2 + head->val;
        head = head->next;
    }
    return integer;
}