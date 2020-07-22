#include <cstdlib>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isCycle = false;
    void DFS(int node, bool *isVisit, vector<vector<int>> &pre, stack<int> &stk, vector<int> &list) {
        isVisit[node] = true;
        list.push_back(node);
        vector<int> p(pre[node]);

        for (int i = 0; i < p.size(); ++i) {
            if (isCycle || find(list.begin(), list.end(), p[i]) != list.end()) {
                isCycle = true;
                break;
            }
            if (!isVisit[p[i]]) {
                DFS(p[i], isVisit, pre, stk, list);
            }
        }

        stk.push(node);
        list.pop_back();
    }

    vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites) {
        vector<int> ret, list;
        stack<int> stk;

        bool *isVisit = (bool *)malloc(numCourses * sizeof(bool));
        memset(isVisit, false, numCourses * sizeof(bool));

        vector<vector<int>> pre;
        for (int i = 0; i < numCourses; ++i) {
            pre.push_back(ret);
        }

        for (int i = 0; i < prerequisites.size(); ++i) {
            pre[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }

        for (int i = 0; i < numCourses; ++i) {
            if (!isVisit[i]) {
                DFS(i, isVisit, pre, stk, list);
            }
        }

        if (isCycle) {
            return ret;
        }

        while (!stk.empty()) {
            ret.push_back(stk.top());
            stk.pop();
        }

        return ret;
    }
};

// https://www.geeksforgeeks.org/topological-sorting/