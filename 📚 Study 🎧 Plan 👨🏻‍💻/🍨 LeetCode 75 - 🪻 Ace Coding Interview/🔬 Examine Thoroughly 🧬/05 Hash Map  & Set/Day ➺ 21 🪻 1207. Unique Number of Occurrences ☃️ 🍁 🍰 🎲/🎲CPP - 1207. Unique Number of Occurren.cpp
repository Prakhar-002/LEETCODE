//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1207

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
      bool uniqueOccurrences(vector<int>& arr) {
            // Count the frequency of each element using an unordered_map
            unordered_map<int, int> frequencyMap;
            for (int num : arr) {
                  frequencyMap[num]++;
            }

            // Use an unordered_set to store unique frequency values
            unordered_set<int> frequencySet;
            for (auto& pair : frequencyMap) {
                  frequencySet.insert(pair.second);
            }

            // Check if the size of the map values equals the size of the set
            return frequencyMap.size() == frequencySet.size();
      }
};
