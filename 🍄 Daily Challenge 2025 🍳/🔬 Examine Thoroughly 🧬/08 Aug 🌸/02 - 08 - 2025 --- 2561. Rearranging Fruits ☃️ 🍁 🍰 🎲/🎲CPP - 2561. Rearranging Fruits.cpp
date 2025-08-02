//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2561

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(bucket1 + bucket2)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      long long minCost(vector<int>& basket1, vector<int>& basket2) {

            // Initialize the minimum element to a large value
            int m = INT_MAX;

            // Create a map to count frequency differences between basket1 and basket2
            unordered_map<int, int> frequency_map;

            // Count each element in basket1 and update the minimum value
            for (int b1 : basket1) {
                  frequency_map[b1]++;
                  m = min(m, b1);  // Keep track of the smallest element
            }

            // Subtract counts for each element in basket2 and update the minimum value
            for (int b2 : basket2) {
                  frequency_map[b2]--;
                  m = min(m, b2);  // Update smallest if necessary
            }

            // Vector to store the elements that need to be swapped
            vector<int> merge;

            // Loop over the frequency map
            for (auto [k, c] : frequency_map) {

                  // If count is odd, return -1 (impossible to balance)
                  if (c % 2 != 0) {
                        return -1;
                  }

                  // Add half the absolute frequency to the merge list
                  for (int i = 0; i < abs(c) / 2; ++i) {
                        merge.push_back(k);
                  }
            }

            // Use nth_element to partially sort up to the halfway point
            nth_element(merge.begin(), merge.begin() + merge.size() / 2,
                        merge.end());

            // Calculate the cost by summing the minimum of each selected value or 2 * smallest element
            return accumulate(merge.begin(), merge.begin() + merge.size() / 2, 0ll,
                              [&](long long res, int x) -> long long {
                                    return res + min(2 * m, x);
                              });
      }
};
