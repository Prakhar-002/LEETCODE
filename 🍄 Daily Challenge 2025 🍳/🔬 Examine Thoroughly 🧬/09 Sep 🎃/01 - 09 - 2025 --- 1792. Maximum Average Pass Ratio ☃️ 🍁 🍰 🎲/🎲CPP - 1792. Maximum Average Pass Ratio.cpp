//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1792

//? ⌚ Time complexity ➺ O(k * log(n) + n) 👉🏻  n = len(classes)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <queue>
using namespace std;

class Solution { 
public:
      double maxAverageRatio(vector<vector<int>> &classes, int extraStudents) {
            // ----------------------------------------------------------
            // Lambda function to calculate the gain of adding an extra passing student
            // Gain = increase in pass ratio when one more passing student is added
            // ----------------------------------------------------------
            auto calculateGain = [](int passes, int totalStudents) {
                  return (double)(passes + 1) / (totalStudents + 1) -
                              (double)passes / totalStudents;
            };

            // ----------------------------------------------------------
            // Max heap to store tuples of:
            // (gain, (number of passes, total students))
            // The heap is used to always pick the class with the highest gain next
            // ----------------------------------------------------------
            priority_queue<pair<double, pair<int, int>>> maxHeap;
            for (const auto &singleClass : classes) {
                  maxHeap.push({calculateGain(singleClass[0], singleClass[1]),
                              {singleClass[0], singleClass[1]}});
            }

            // ----------------------------------------------------------
            // Distribute extra students greedily:
            // Pop the class with maximum gain, update it by adding one passing student,
            // recalculate gain and push it back to heap
            // ----------------------------------------------------------
            while (extraStudents--) {
                  auto [currentGain, classInfo] = maxHeap.top();
                  maxHeap.pop();
                  int passes = classInfo.first;
                  int totalStudents = classInfo.second;

                  // Push updated class info with recalculated gain back to heap
                  maxHeap.push({calculateGain(passes + 1, totalStudents + 1),
                              {passes + 1, totalStudents + 1}});
            }

            // ----------------------------------------------------------
            // Calculate the total average pass ratio after all extra students are assigned
            // ----------------------------------------------------------
            double totalPassRatio = 0;
            while (!maxHeap.empty()) {
                  auto [_, classInfo] = maxHeap.top();
                  maxHeap.pop();
                  totalPassRatio += (double)classInfo.first / classInfo.second;
            }

            // Return the average pass ratio across all classes
            return totalPassRatio / classes.size();
      }
};
