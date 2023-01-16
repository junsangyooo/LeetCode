// 692. Top K Frequent Words C++
#include <string>
#include <unordered_map>
#include <algorithm>
class Solution {
public:
    static bool comparator(std::pair<std::string,int> p1, std::pair<std::string,int> p2)
    {
        if(p1.second>p2.second || (p1.second==p2.second && p1.first<p2.first))
            return true;
        return false;
    }
    
    std::vector<std::string> topKFrequent(std::vector<std::string>& words, int k) {
        std::unordered_map<std::string,int> m1;
        
        for(int i=0; i<words.size(); i++)
            m1[words[i]]++;
        
        std::vector<std::pair<std::string,int>> v1;
        for(auto it=m1.begin(); it!=m1.end(); it++)
            v1.push_back({it->first,it->second});
        
        std::sort(v1.begin(),v1.end(),comparator);
        
        std::vector<std::string> ans;
        for(int i=0; i<k; i++)
        {
            ans.push_back(v1[i].first);
        }
        
        return ans;
    }
};
