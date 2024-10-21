//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1593

//? ⌚ Time complexity ➺ O(2 ^ n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
private:
      // Helper function to perform depth-first search (DFS) to find the maximum
      // number of unique substrings we can split the string 's' into.
      int maxUniqueFinderDfs(int i, unordered_set<string>& cur_set, const string& s) {
            // Variable to track the maximum number of unique substrings found
            int uniqueSubString = 0;

            // Base case: if 'i' reaches the end of the string, return 0
            if (i == s.length()) {
                  return 0;
            }

            // Loop through the string starting from index 'i'
            for (int j = i; j < s.length(); ++j) {
                  // Generate the substring from index 'i' to 'j'
                  string subString = s.substr(i, j - i + 1);

                  // If the substring is already in the set, skip it
                  if (cur_set.find(subString) != cur_set.end()) {
                        continue;
                  }

                  // Add the substring to the set of unique substrings
                  cur_set.insert(subString);

                  // Recursively call the function for the next index (j + 1)
                  // and update the maximum unique substring count
                  uniqueSubString = max(
                        uniqueSubString,
                        1 + maxUniqueFinderDfs(j + 1, cur_set, s)
                  );

                  // Backtrack: remove the substring from the set
                  cur_set.erase(subString);
            }

            // Return the maximum number of unique substrings found
            return uniqueSubString;
      }

public:
      // Main function to initiate the DFS process
      int maxUniqueSplit(string s) {
            // Start DFS from index 0 with an empty set of substrings
            unordered_set<string> cur_set;
            return maxUniqueFinderDfs(0, cur_set, s);
      }
};

