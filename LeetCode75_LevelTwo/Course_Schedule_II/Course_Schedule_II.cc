// 210. Course Schedule II C++
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
    vector<vector<int>> graph;
    vector<int> result;
    vector<int> indegree;
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        //Initializing a 2d graph , result vector and indegree array
        graph = vector<vector<int>> (numCourses);
        indegree = vector<int>(numCourses);
        
        //Indegree
        for(auto& prereq : prerequisites)
            graph[prereq[1]].push_back(prereq[0]),
            indegree[prereq[0]]++;
        
        // If the indegree becomes 0 of a course then again add them into DFS and start DFS call from that course .
        for(int i = 0; i < numCourses; i++)
            if(indegree[i] == 0) dfs(i);                   
        
        //In the end return `result` if it contains all `numCourses` else return  []
        if(size(result) == numCourses) return result;
        return {};
    }
    void dfs(int current) {
        result.push_back(current);            
        //Making sure that the current course that we added is marked as visited
        indegree[current] = -1;                     
        
        //if any next course has a indegree of 0 ie if it has no prerequisites requirement than make dfs call for that course
        for(auto nextCourse : graph[current])          
            if(--indegree[nextCourse] == 0)     
                dfs(nextCourse);
    }
};
