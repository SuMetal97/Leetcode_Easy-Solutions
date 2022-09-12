/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int size = 0,maxsize = 0;
int maxDepth(struct TreeNode* root){
    size = 0;
    maxsize = 0;
    helper(root);
    return maxsize;
}

void helper(struct TreeNode* root){
    if(root == NULL){
        return;
    }
    size++;
    if(maxsize<size){
        maxsize = size;
    }
    helper(root->left);
    helper(root->right);
    size--;
}
