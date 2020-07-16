int *ret = NULL;

void traversal(struct TreeNode *node, int *size) {
    if (node->left) {
        traversal(node->left, size);
    }

    ret = (int *)realloc(ret, (*size + 1) * sizeof(int));
    ret[(*size)++] = node->val;

    if (node->right) {
        traversal(node->right, size);
    }
}

int *inorderTraversal(struct TreeNode *root, int *returnSize) {
    *returnSize = 0;
    if (root != NULL) {
        traversal(root, returnSize);
    }
    return ret;
}