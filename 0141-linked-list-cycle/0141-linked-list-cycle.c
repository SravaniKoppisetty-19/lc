/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode node;
bool hasCycle(struct ListNode *head) {
    node *temp = head;
    int flag=0;
    while (temp!= NULL)
    {
        //break;
        if(temp->val == 1e9)
        {
            flag =1;
            break;
        }
        temp->val = 1e9;
        temp= temp->next;
    }
    return flag;
    
}