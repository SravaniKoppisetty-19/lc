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
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize=0;
    int* a=(int*)malloc(101*sizeof(int));
    void helper(struct TreeNode* root)
    {
        if(root==NULL)return;
        helper(root->left);
        helper(root->right);
        a[(*returnSize)++]=root->val;
    }
    helper(root);
    return a;
}