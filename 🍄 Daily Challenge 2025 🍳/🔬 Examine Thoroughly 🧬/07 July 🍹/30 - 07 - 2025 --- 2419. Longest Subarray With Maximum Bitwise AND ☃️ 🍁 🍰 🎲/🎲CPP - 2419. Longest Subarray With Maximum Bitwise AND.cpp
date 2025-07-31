//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2419

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
// Intention => taking bitwise AND of two values let say n and max value in arr
// 1. if n > max(nums) : n & max(nums) < max(nums)
// 2. if n == max(nums) : n & max(nums) == max(nums)
// 3. if n > max(nums) : n & max(nums) < max(nums)
// so we just need to find only contiguous sequence of max elements within an array
public:
      int longestSubarray(vector<int>& nums) {
            // to find maximum number found in the `nums` vector
            int target = 0;
            // iterates through each number in `nums`
            for (int num : nums) {
                  // update `target` with max of `cur num` and `target` itself
                  target = max(target, num);
            }

            // `size` is used to keep track of the current subarray's size
            int size = 0;
            // `longestSubArray` is used to track the size of the longest subarray found so far
            int longestSubArray = 0;

            // second `for` loop again iterates through each number in `nums`
            for (int num : nums) {
                  // cur No. `num` is == `target`, the `size` is incremented by `1` else set to again `0`
                  size = (num == target) ? size + 1 : 0;
                  // take max of `cur size` and `longestSubArray`
                  // ensures that `longestSubArray` always holds the length of the longest contiguous subarray of `target`
                  longestSubArray = max(longestSubArray, size);
            }

            // Returning the length of the longest such subarray
            return longestSubArray;
      }
};
