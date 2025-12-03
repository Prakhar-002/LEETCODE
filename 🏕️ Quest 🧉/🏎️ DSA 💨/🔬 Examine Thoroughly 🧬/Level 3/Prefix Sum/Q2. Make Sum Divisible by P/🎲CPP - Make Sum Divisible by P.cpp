//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1590

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_map>
#include <numeric>
#include <algorithm>
using namespace std;

class Solution {
public:
      int minSubarray(vector<int>& nums, int p) {
            // Calculates the total sum of elements in the `nums` vector
            long long total = accumulate(nums.begin(), nums.end(), 0LL);
            // remainder when `total` is divided by `p`
            int remain = total % p;

            // If `remain` is `0`, sum is already divisible by `p`
            if (remain == 0) {
                  // no elements need to be removed 
                  return 0;
            }

            // keep track of the minimum subarray length found
            int subArrLen = nums.size();
            // used in calculating the dynamic prefix sums
            long long cur_sum = 0;

            // unordered_map to map remainders of prefix sums to their corresponding indices
            // `{0, -1}` to handle cases where a prefix sum is exactly divisible by `p`
            unordered_map<int, int> remainToIdx {{0, -1}};

            for (int i = 0; i < nums.size(); ++i) {
                  // Updated with the addition of the current number, `% p`
                  cur_sum = (cur_sum + nums[i]) % p;
                  // Calculates a modified prefix sum needed to find 
                  // a matching subarray whose sum's remainder is `remain`
                  int prefix = (cur_sum - remain + p) % p;

                  // Checks if `prefix` is in `remainToIdx`. If it is
                  if (remainToIdx.find(prefix) != remainToIdx.end()) {
                        // Calculates length of current subarray that ends at current index
                        // and whose sum's remainder equals to what's required (`remain`)
                        int length = i - remainToIdx[prefix];
                        // Updates the (`subArrLen`) if a shorter valid subarray is found
                        subArrLen = min(subArrLen, length);
                  }

                  // The current `cur_sum` is mapped to the current index in `remainToIdx`
                  remainToIdx[cur_sum] = i;
            }

            // if `subArrLen` remains equal to the length of `nums`, 
            // it means no valid subarray was found, and thus `-1`
            // Otherwise, it returns the length of the minimum subarray found
            return subArrLen == nums.size() ? -1 : subArrLen;
      }
};