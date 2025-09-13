//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3005

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
      int maxFrequencyElements(const vector<int>& nums) {
            unordered_map<int, int> freq;   // Count frequency of each element

            for (int num : nums) {
                  freq[num]++;
            }

            int maxFreq = 0;
            int totalFreq = 0;

            // Find max frequency and sum frequencies for elements having max freq
            for (const auto& [num, count] : freq) {
                  if (count > maxFreq) {
                        maxFreq = count;
                        totalFreq = count;
                  } else if (count == maxFreq) {
                        totalFreq += count;
                  }
            }

            return totalFreq;
      }
};
