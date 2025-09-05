/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* Create_A_Node(int val)
 {
    struct ListNode *newnode;
    newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newnode->val = val;
    newnode->next = NULL;
    return newnode;
 }
 int gcd(int a,int b)
 {
    if(b==0){
        return a;
    }
    else return gcd(b,a%b);
 }
struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    struct ListNode* temp = head;
    while(temp != NULL && temp->next != NULL){
    int val1 = temp->val;
    int val2 =temp->next->val;
    int gcdd= gcd(val1,val2);
    struct ListNode* nn = Create_A_Node(gcdd);
    nn->next=temp->next;
    temp->next=nn;
    temp = nn->next;
    }
    return head;
}