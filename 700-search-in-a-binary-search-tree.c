struct TreeNode *searchBST(struct TreeNode *root, int val) {
    if (root->val == val) {
        return root;
    }

    struct TreeNode *ret;
    if (root->left && (ret = searchBST(root->left, val))) {
        return ret;
    }
    if (root->right && (ret = searchBST(root->right, val))) {
        return ret;
    }

    return NULL;
}