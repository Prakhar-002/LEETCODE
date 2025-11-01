//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 763

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
      vector<int> partitionLabels(string s) {
            // Step 1: Store the last occurrence index of each character
            vector<int> lastIdx(26, 0); // Array to store last index of each character (a-z)

            // Populate last occurrence indices
            for (int i = 0; i < s.length(); i++) {
                  lastIdx[s[i] - 'a'] = i; // Store last index of each character
            }

            // Step 2: Partitioning process
            vector<int> partitions;
            int size = 0, end = 0; // Variables to track partition size and partition end

            // Iterate through the string to determine partitions
            for (int i = 0; i < s.length(); i++) {
                  size++; // Increase partition size
                  end = max(end, lastIdx[s[i] - 'a']); // Update partition end

                  // If the current index matches the partition end
                  if (i == end) {
                        partitions.push_back(size); // Store partition size
                        size = 0; // Reset size for the next partition
                  }
            }

            return partitions; // Return list of partition sizes
      }
};