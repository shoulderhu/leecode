int *ret = NULL;

void traversal(struct TreeNode *node, int *size) {
    ret = (int *)realloc(ret, (*size + 1) * sizeof(int));
    ret[(*size)++] = node->val;

    if (node->left) {
        traversal(node->left, size);
    }
    if (node->right) {
        traversal(node->right, size);
    }
}

int *preorderTraversal(struct TreeNode *root, int *returnSize) {
    *returnSize = 0;
    if (root != NULL) {
        traversal(root, returnSize);
    }
    return ret;
}