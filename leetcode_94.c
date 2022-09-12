int *res;
int pos;


int* inorderTraversal(struct TreeNode* root, int* returnSize){
    pos = 0;
    res = (int*)malloc(100*sizeof(int*));
    traversal(root);
    *returnSize = pos;
    return res;
}

void traversal(struct TreeNode* root){
    if(root ==NULL){
        return res;
    }
    if(root->left != NULL){
        traversal(root->left);
    }
    res[pos++] = root->val;
    if(root->right!= NULL){
        traversal(root->right);
    }
}
