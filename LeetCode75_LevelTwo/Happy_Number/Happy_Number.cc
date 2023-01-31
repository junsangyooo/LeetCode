// 202. Happy Number C++
#include <math.h>

class Solution {
public:
    bool isHappy(int n) {
        int slow_runner = n;
        int fast_runner = nextNum(n);
        while (fast_runner != 1 && slow_runner != fast_runner) {
            slow_runner = nextNum(slow_runner);
            fast_runner = nextNum(nextNum(fast_runner));
        }
        return fast_runner == 1;
    }
    int nextNum(int n) {
        int new_num = 0;
        while (n > 0) {
            new_num += pow(n%10, 2);
            n = n / 10;
        }
        return new_num;
    }
};
