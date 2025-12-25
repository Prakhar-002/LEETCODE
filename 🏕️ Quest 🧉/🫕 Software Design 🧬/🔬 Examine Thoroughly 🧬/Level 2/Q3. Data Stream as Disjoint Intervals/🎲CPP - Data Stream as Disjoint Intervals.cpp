//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L2 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <set>
#include <vector>

class SummaryRanges {
private:
      // Set to store all added numbers in sorted order
      // set keeps numbers sorted, so we can iterate in increasing order
      std::set<int> sortedSet;

public:
      SummaryRanges() {
            // Constructor - set is automatically initialized
      }

      void addNum(int value) {
            // Add the number to the set
            // This ensures we have all unique numbers in sorted order
            sortedSet.insert(value);
      }

      std::vector<std::vector<int>> getIntervals() {
            // Vector to store the resulting intervals [start, end]
            std::vector<std::vector<int>> res;

            // Iterate over each number in the set (in sorted order)
            for (int n : sortedSet) {
                  // If res is not empty and the current number is consecutive to the last interval
                  if (!res.empty() && res.back()[1] + 1 == n) {
                        // Extend the last interval’s end to include this number
                        res.back()[1] = n;
                  } else {
                        // Otherwise, start a new interval [n, n]
                        res.push_back({n, n});
                  }
            }

            // Return the list of merged intervals
            return res;
      }
};
