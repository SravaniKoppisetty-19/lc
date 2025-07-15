/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int height = 0;
        queue<TreeNode*>Q;
        if(root == NULL)
        {
            return 0;
        }
        Q.push(root);
        while(!Q.empty())
        {
            int len = Q.size();
            for(int i =0;i<len;i++)
            {
                TreeNode* node = Q.front();
                Q.pop();
                if(node->left)
                {
                    Q.push(node->left);
                }
                if(node->right)
                {
                    Q.push(node->right);
                }
            }
            height++;
        }
        return height;
    }
};