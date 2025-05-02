/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* findmin(struct TreeNode *root) {
    while (root && root->left != NULL) {
        root = root->left;
    }
    return root;
}
struct TreeNode* deleteNode(struct TreeNode* root, int key) {
     if(root == NULL){
        return NULL;
    }
    if(key< root->val){
        root->left = deleteNode(root->left, key);
    }
    else if(key > root->val){
        root->right = deleteNode(root->right,key);
    }
    else{
        //3 conditions 
        //1) no childrens 
        if(root->left == NULL && root->right==NULL){
            free(root);
            return NULL;
        }
        //one child
        else if(root->left == NULL || root->right == NULL){
            struct TreeNode *temp;
            if(root->right == NULL){
                temp = root->left;
            }
            else{
                temp = root->right;
            }
            free(root);
            return temp;
        }
        //has 2 childs 
        else{
            struct TreeNode *temp = findmin(root->right);
            root->val = temp->val;
            root->right = deleteNode(root->right,temp->val);
            
        }
    }
    return root;

}