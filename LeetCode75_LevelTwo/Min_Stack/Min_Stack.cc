// 155. Min Stack C++
#include <vector>

class MinStack {
    std::vector<std::pair<int, int>> v;
public:
    MinStack() {
    }
    
    void push(int val) {
        if (v.empty()) {
            v.emplace_back(std::make_pair(val, val));
            return;
        }
        int current_min = v.back().second;
        v.emplace_back(std::make_pair(val, std::min(current_min, val)));
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        return v.back().first;
    }
    
    int getMin() {
        return v.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
