/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool sym = true;
bool isSymmetric(struct TreeNode* root){
    sym = true;
    traversal(root->left, root->right);
    return sym;
}

void traversal(struct TreeNode* left, struct TreeNode* right){
    if(left == NULL && right == NULL){
        return;
    }
    if((left == NULL && right != NULL)||(left!= NULL && right == NULL)){
        sym = false;
        return;
    }
    if(left->val != right->val){
        sym = false;
        return;
    }
    if(left->val == right->val){
        traversal(left->left, right->right);
        if(sym == false){
            return;
        }
        traversal(left->right, right->left);
    }
}
