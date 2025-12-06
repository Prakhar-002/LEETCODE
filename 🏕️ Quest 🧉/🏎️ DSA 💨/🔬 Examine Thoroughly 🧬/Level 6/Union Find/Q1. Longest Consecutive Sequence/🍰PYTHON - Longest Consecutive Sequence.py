#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L6.1 Q1

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n) 

class Solution:
      def longestConsecutive(self, nums: List[int]) -> int:
            # Use a set for O(1) lookups
            hash_set = set(nums)

            longest = 0  # Store the length of longest consecutive sequence

            for n in hash_set:
                  # Check if n is the start of a sequence (no predecessor)
                  if n - 1 not in hash_set:
                        cur_streak = 1
                        cur = n

                        # Count consecutive numbers from cur upwards
                        while cur + 1 in hash_set:
                              cur_streak += 1
                              cur += 1

                        # Update longest streak if current is longer
                        longest = max(longest, cur_streak)

            return longest
