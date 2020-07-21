#include <vector>
#include <unordered_map>
#include <queue>
#include <utility>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); ++i) {
            ++map[nums[i]];
        }

        priority_queue<pair<int, int>> que;
        for (auto iter = map.begin(); iter != map.end(); ++iter) {
            que.push(make_pair(iter->second, iter->first));
        }

        vector<int> ret;
        for (int i = 0; i < k; ++i) {
            ret.push_back(que.top().second);
            que.pop();
        }

        return ret;
    }
};