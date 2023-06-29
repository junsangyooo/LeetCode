// 380. Insert Delete GetRandom O(1)
#include <random>
#include <vector>
#include <unordered_map>
#include <cstdlib>

class RandomizedSet {
    // std::vector<int> vec;
    // int size;
    // std::map<int, bool> check;
    std::vector<int> vec;
    std::unordered_map<int, int> check;
    
public:
    RandomizedSet() {
        // size = 0;
    }
    
    bool insert(int val) {
        // if (check.find(val) == check.end() || !check[val]) {
        //     vec.push_back(val);
        //     size++;
        //     check[val] = true;
        //     return true;
        // }
        // return false;
        if(check.find(val)!=check.end()) return false;
        else{
            vec.push_back(val);
            check[val]=vec.size()-1;
            return true;
        }
    }
    
    bool remove(int val) {
        // if (check.find(val) == check.end() || !check[val]) return false;
        // check[val] = false;
        // size--;
        // vec.erase(find(vec.begin(), vec.end(), val));
        // return true;
        if (check.find(val) == check.end()) return false;
        int last = vec.back();
        vec[check[val]] = vec.back();
        vec.pop_back();
        check[last] = check[val];
        check.erase(val);
        return true;
    }
    
    int getRandom() {
        return vec[rand()%vec.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */