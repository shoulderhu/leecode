#include <stack>

class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> ret;
        stack<TreeNode *> stk;
        TreeNode *top;

        if (root) {
            stk.push(root);
        }

        while (!stk.empty()) {
            top = stk.top();
            stk.pop();

            ret.push_back(top->val);
            if (top->right) {
                stk.push(top->right);
            }
            if (top->left) {
                stk.push(top->left);
            }
        }

        return ret;
    }
};