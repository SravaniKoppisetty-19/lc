/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *temp=head,*temp1=head;
    while(temp1!=NULL && temp1->next!=NULL)
    {
        temp=temp->next;
        temp1=temp1->next->next;
    }
    return temp;
}