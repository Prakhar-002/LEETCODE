//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3408

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

class TaskManager {
      // Priority queue (max-heap) for task pairs
      priority_queue<pair<int, int>> heap;
      // Map taskId to priority
      unordered_map<int, int> taskPriority;
      // Map taskId to userId
      unordered_map<int, int> taskOwner;

public:
      TaskManager(vector<vector<int>>& tasks) {
            // Add each initial task
            for (auto& t : tasks) {
                  add(t[0], t[1], t[2]);
            }
      }

      void add(int userId, int taskId, int priority) {
            // Push as (-priority, -taskId) for max-heap behaviour
            heap.push({priority, taskId});
            taskPriority[taskId] = priority;
            taskOwner[taskId] = userId;
      }

      void edit(int taskId, int newPriority) {
            // Push updated priority into heap
            heap.push({newPriority, taskId});
            taskPriority[taskId] = newPriority;
      }

      void rmv(int taskId) {
            // Mark the task as removed
            taskPriority[taskId] = -1;
      }

      int execTop() {
            // Pop tasks until a valid task is found
            while (!heap.empty()) {
                  auto [priority, id] = heap.top();
                  heap.pop();
                  if (taskPriority[id] == priority) {
                        taskPriority[id] = -1; // Mark as executed
                        return taskOwner.count(id) ? taskOwner[id] : -1;
                  }
            }

            return -1;
      }
};
