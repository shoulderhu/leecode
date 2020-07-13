#include <deque>
#include <algorithm>

class Solution {
    public:
        int nthUglyNumber(int n) {
            deque<long> two, three, five;
            long nth = 1;

            two.push_back(2);
            three.push_back(3);
            five.push_back(5);

            for (int i = 2; i <= n; ++i) {
                nth = min(min(two[0], three[0]), five[0]);

                if (two[0] == nth) {
                    two.pop_front();
                }
                if (three[0] == nth) {
                    three.pop_front();
                }
                if (five[0] == nth) {
                    five.pop_front();
                }

                two.push_back(nth * 2);
                three.push_back(nth * 3);
                five.push_back(nth * 5);
            }

            return (int)nth;
        }
};