//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2311

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int longestSubsequence(string s, int k) {
            long long sum = 0; // Stores current binary value of selected subsequence
            int count = 0;     // Count of characters included in the subsequence
            int bits = 0;      // Max bits needed to represent any number ≤ k
            int temp = k;

            while (temp > 0) { // Compute bit length of k
                  bits++;
                  temp >>= 1;
            }

            int n = s.size();
            for (int i = 0; i < n; ++i) {
                  char ch = s[n - 1 - i]; // Traverse from right to left

                  if (ch == '1') {
                        // If adding 2^i does not exceed k and within bit limit
                        if (i < bits && sum + (1LL << i) <= k)
                        {
                              sum += (1LL << i); // Add value 2^i to the sum
                              count++;           // Include this '1' in subsequence
                        }
                  }
                  else {
                        count++; // Always safe to include '0'
                  }
            }

            return count;
      }
};
