// 509 Fibonacci Number C++

class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
        else if (n == 1) return 1;
        int pre = 1;
        int prepre = 0;
        for (int i = 1; i < n; i++) {
            int tmp = pre;
            pre += prepre;
            prepre = tmp;
        }
        return pre;
    }
};
