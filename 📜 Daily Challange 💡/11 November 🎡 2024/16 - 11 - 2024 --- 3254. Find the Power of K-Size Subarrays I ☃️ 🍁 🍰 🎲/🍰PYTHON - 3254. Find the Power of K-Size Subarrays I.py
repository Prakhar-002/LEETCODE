#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3254

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def resultsArray(self, nums: List[int], k: int) -> List[int]:
            # Initialize the results list to store the output
            results = []

            # Initialize the left pointer for the sliding window
            l = 0

            # Variable to keep track of the count of consecutive numbers
            con_cnt = 1

            # Iterate through the array with the right pointer
            for r in range(len(nums)):
                  # Check if the current and previous numbers are consecutive
                  if r > 0 and nums[r - 1] + 1 == nums[r]:
                        con_cnt += 1

                  # If the window size exceeds k, update the left pointer
                  if r - l + 1 > k:
                        # Decrement con_cnt if the leftmost numbers were consecutive
                        if nums[l] + 1 == nums[l + 1]:
                              con_cnt -= 1
                        # Slide the window to the right
                        l += 1

                  # If the window size is exactly k, calculate the result for this window
                  if r - l + 1 == k:
                        # Append the last number in the window if all are consecutive; otherwise, append -1
                        results.append(nums[r] if con_cnt == k else -1)

            # Return the final results list
            return results

#! ---------------------------------------------------------------------------------

#? ⌚ Time complexity ➺ O(n * k) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def resultsArray(self, nums: List[int], k: int) -> List[int]:
            # Helper function to check for consecutive numbers in the range [l, r]
            def findMax(l, r):
                  # Iterate through the range [l, r-1] to check consecutive numbers
                  for i in range(l, r):
                        # If two consecutive numbers are not successive, return -1
                        if nums[i] + 1 != nums[i + 1]:
                              return -1
                  
                  # Return the last number in the range if all are consecutive
                  return nums[r]

            # Initialize the result list to store the output
            res = []

            # Set the starting index for the sliding window
            l = 0

            # Iterate through nums using a sliding window of size k
            for r in range(k - 1, len(nums)):
                  # Append the result of findMax for the current window [l, r]
                  res.append(findMax(l, r))
                  # Move the left pointer of the window one step to the right
                  l += 1

            # Return the final result list
            return res
