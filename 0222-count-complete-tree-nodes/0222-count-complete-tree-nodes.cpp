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
    int countNodes(TreeNode* root) {
        if(root == NULL)
        {
            return 0;
        }
        queue<TreeNode*>Q;
        int nodes=0;
        Q.push(root);
        while(!Q.empty())
        {
            int length = Q.size();
            for(int i =0;i<length ;i++)
            {
                TreeNode* tempp = Q.front();
                Q.pop();
                if(tempp->left)
                {
                    Q.push(tempp->left);
                }
                if(tempp->right)
                {
                    Q.push(tempp->right);
                }
                nodes++;
            }
        }
        return nodes;
    }
};