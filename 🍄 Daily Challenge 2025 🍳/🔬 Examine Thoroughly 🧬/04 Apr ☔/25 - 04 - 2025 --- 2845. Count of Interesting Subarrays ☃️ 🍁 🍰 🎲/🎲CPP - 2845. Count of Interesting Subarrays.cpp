//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2845

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(min(n, modulo))

class Solution {
public:
      long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
            int n = nums.size();                             // Length of the array
            unordered_map<int, long long> cnt;               // Map to store prefix mod counts
            cnt[0] = 1;                                      // Initialize prefix 0 with count 1
            long long res = 0;                               // Result to store total interesting subarrays
            int prefix = 0;                                  // Prefix sum counter

            for (int i = 0; i < n; i++) {
                  // If current number satisfies nums[i] % modulo == k, increment prefix
                  if (nums[i] % modulo == k) {
                        prefix++;
                  }

                  // Add count of (prefix - k + modulo) % modulo from map
                  res += cnt[(prefix - k + modulo) % modulo];

                  // Update the map with current prefix % modulo
                  cnt[prefix % modulo]++;
            }

            return res;                                       // Return total interesting subarrays
      }
};
