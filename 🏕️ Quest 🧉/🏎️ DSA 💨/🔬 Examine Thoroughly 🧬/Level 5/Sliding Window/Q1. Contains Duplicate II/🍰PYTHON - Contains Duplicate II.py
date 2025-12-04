#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L5.2 Q1

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(k) 

class Solution:
      def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
            # Sliding window set to track elements within distance k
            duplicate = set()
            l = 0  # Left pointer of sliding window

            # Expand right pointer through the array
            for r in range(len(nums)):
                  # Shrink window from left if window size exceeds k
                  if r - l > k:
                        duplicate.remove(nums[l])  # Remove leftmost element
                        l += 1                      # Move left pointer right

                  # Check if current element already exists in current window
                  if nums[r] in duplicate:
                        return True  # Duplicate found within distance k

                  # Add current element to sliding window set
                  duplicate.add(nums[r])

            # No duplicates found within distance k
            return False
