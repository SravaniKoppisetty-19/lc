/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode node;
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    node *p1=headA;
    node *p2=headB;
    node *temp1=p1;
    node *temp2=p2;
    while (p1 || p2)
    {
        if(p1==p2)
        {
            return p1;
        }
        if(p1 == NULL)
        {
            p1=temp2;  
        }
        if(p2 == NULL)
        {
            p2=temp1;
        }if(p1==p2)
        {
            return p1;
        }
        p1=p1->next;
        p2=p2->next;

    }
    return 0;
}