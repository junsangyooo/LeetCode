// 232. Implement Queue using Stacks C++
#include <vector>

class MyQueue {
    std::vector<int> v1;
    std::vector<int> v2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        v1.emplace_back(x);
    }
    
    int pop() {
        peek();
        int output = v2.back();
        v2.pop_back();
        return output;
    }
    
    int peek() {
        if (v2.empty()) {
            while (!v1.empty()) {
                int tmp = v1.back();
                v1.pop_back();
                v2.emplace_back(tmp);
            }
        }
        return v2[v2.size() - 1];
    }
    
    bool empty() {
        return v1.empty() && v2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
