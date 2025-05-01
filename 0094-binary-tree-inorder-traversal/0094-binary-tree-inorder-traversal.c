/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 void InorderHelper(struct TreeNode* root,int *a,int* returnSize)
 {
    if(root==NULL)
    {
        return;
    }
    InorderHelper(root->left,a,returnSize);
    a[(*returnSize)++]=root->val;
    InorderHelper(root->right,a,returnSize);
 }
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize=0;
    int *a=(int*)malloc(101*sizeof(int));
    InorderHelper(root,a,returnSize);
    return a;
}