//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3043

//? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(arr1), m = len(arr2)

//? 🧺 Space complexity ➺ O(m)

#include <vector>
#include <unordered_set>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
      int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
            // if `arr1` is longer than `arr2`
            if (arr1.size() > arr2.size()) {
                  // they are swapped
                  // This ensures that `arr1` is the shorter of the two lists
                  swap(arr1, arr2);
            }

            // Creating a Set of Numerical Prefixes
            unordered_set<int> prefix_set;

            // For each number `num` in `arr1`
            for (int num : arr1) {
                  // `123`, `prefix_set` will get `123`, `12`, and `1`
                  //  until `num` becomes 0 or is already in the set
                  while (num && prefix_set.find(num) == prefix_set.end()) {
                        // added to the `prefix_set`
                        prefix_set.insert(num);
                        // and the number is continually divided by 10
                        num /= 10;
                  }
            }

            // `longestPrefix` is to keep track of the longest common prefix found
            int longestPrefix = 0;

            // For each number `num` in `arr2`
            for (int num : arr2) {
                  // until num either becomes 0 or is found in `prefix_set`
                  while (num && prefix_set.find(num) == prefix_set.end()) {
                        // number is continually divided by 10
                        num /= 10;
                  }

                  // If such a common number `num` (prefix) is found in `prefix_set`
                  if (num) {
                        // length of this number is compared with `longestPrefix`
                        // updated if this prefix is longer
                        longestPrefix = max(longestPrefix, static_cast<int>(to_string(num).length()));
                  }
            }

            // returns the longest common prefix
            return longestPrefix;
      }
};

