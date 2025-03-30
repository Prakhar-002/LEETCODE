//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2405

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
      int partitionString(string s) {
            int partitions = 0; // Count of partitions
            vector<bool> seen(26, false); // Boolean array to track seen characters

            // Iterate through each character in the string
            for (char ch : s) {
                  int index = ch - 'a'; // Convert character to index (0-25)

                  // If the character is already seen, start a new partition
                  if (seen[index]) {
                        partitions++; // Increment partition count
                        fill(seen.begin(), seen.end(), false); // Reset seen array
                  }

                  // Mark the current character as seen
                  seen[index] = true;
            }

            return partitions + 1; // Add one to count the last partition
      }
};
