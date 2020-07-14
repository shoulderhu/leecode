#include <vector>

class Solution {
public:
    void preOrderTraversal(struct TreeNode *n, vector<int> &vec) {
        if (n) {
            vec.push_back(n->val);
            preOrderTraversal(n->left, vec);
            preOrderTraversal(n->right, vec);
        } else {
            vec.push_back(-1);
        }
    }

    bool isSameTree(struct TreeNode *p, struct TreeNode *q) {
        vector<int> pVec, qVec;
        preOrderTraversal(p, pVec);
        preOrderTraversal(q, qVec);

        for (int i = 0; i < pVec.size(); ++i) {
            if (i == qVec.size() || pVec[i] != qVec[i]) {
                return false;
            }
        }

        return true;
    }
};