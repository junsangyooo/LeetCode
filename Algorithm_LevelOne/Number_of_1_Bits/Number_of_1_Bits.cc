// 191. Number of 1 Bits C++
#include <stdint.h>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;         
        for (int i = 0; i < 32; i++)
		{ 			
            if((n & (1<<i))!=0)
                cnt+=1;
        }
        return cnt;
    }
};
