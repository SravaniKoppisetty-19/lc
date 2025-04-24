/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode node;
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    node *temp1 = list1;
    node *temp2 = list2;
    node *head =(node*)malloc(sizeof(node));
    head->val = -1;
    head->next = NULL;
    node *temp = head;
    while(temp1 && temp2)
    {
        if(temp1->val < temp2->val)
        {
            temp->next = temp1;
            temp1 = temp1->next;
        }
        else {
            temp->next=temp2;
            temp2=temp2->next;
        }
        temp = temp->next;
    }
    if(temp1 != NULL)
    {
        temp->next = temp1;
    } 
    if(temp2 != NULL)
    {
        temp->next = temp2;
    }
    return head->next;
}