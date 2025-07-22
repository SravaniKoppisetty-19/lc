/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 struct TreeNode* Create_A_Node(int val)
 {
      struct TreeNode* newnode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
      newnode-> val = val;
      newnode->left = NULL;
      newnode->right =NULL;
      return newnode;
 }
 struct TreeNode* Insert(int* nums,int left,int right)
 {
    if(left>right) return NULL;
    int middle = left+(right-left)/2;
    struct TreeNode* root = Create_A_Node(nums[middle]);
    root->left = Insert(nums,left,middle-1);
    root->right = Insert(nums,middle+1,right);
    return root;
 }
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    return Insert(nums,0,numsSize-1);
}