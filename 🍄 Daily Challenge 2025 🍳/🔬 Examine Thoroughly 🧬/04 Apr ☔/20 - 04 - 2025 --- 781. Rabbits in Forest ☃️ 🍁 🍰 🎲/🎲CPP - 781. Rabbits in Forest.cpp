//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 781

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
      int numRabbits(vector<int>& answers) {
            // Hash map to store count of each answer
            unordered_map<int, int> countMap;

            // Count the frequency of each answer
            for (int ans : answers) {
                  countMap[ans]++;
            }

            int totalRabbits = 0;  // Total rabbits in forest

            // Iterate through each entry in the map
            for (auto& entry : countMap) {
                  int answer = entry.first;   // Number of other same-colored rabbits
                  int freq = entry.second;    // Count of rabbits giving this answer

                  int groupSize = answer + 1; // Group size = answer + 1

                  // Calculate number of groups needed
                  int numGroups = freq / groupSize;
                  if (freq % groupSize != 0) {
                        numGroups += 1;       // Add one extra group if needed
                  }

                  // Add total rabbits from these groups
                  totalRabbits += numGroups * groupSize;
            }

            // Return the minimum total number of rabbits
            return totalRabbits;
      }
};
