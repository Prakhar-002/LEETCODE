#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 368

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def largestDivisibleSubset(self, nums: List[int]) -> List[int]:
            # Sort the array to ensure all potential divisors come before a number
            nums.sort()
            n = len(nums)

            # memo[i] stores the length of the largest divisible subset ending with nums[i]
            memo = [1] * n

            # parent[i] stores the index of the previous element in the divisible chain
            parent = [None] * n

            # Build the memo and parent arrays
            for i in range(n):
                  for j in range(i):
                        # Check if nums[i] is divisible by nums[j]
                        if nums[i] % nums[j] == 0:
                              # Update if we find a longer divisible subset ending at i
                              if memo[j] + 1 > memo[i]:
                                    memo[i] = memo[j] + 1
                                    parent[i] = j

            # Find the index with the maximum value in memo
            best = max((memo[i], i) for i in range(n))  # (length, index)
            curIdx = best[1]

            # Reconstruct the subset by following parent pointers
            resSet = []
            while curIdx is not None:
                  resSet.append(nums[curIdx])  # Add the current number
                  curIdx = parent[curIdx]   # Move to previous number in the chain

            return resSet  # Return the largest divisible subset


#!-------------------------------------------------------------------- 

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def largestDivisibleSubset(self, nums: List[int]) -> List[int]:
            # Step 1: Sort the array to ensure smaller numbers come first
            # This helps in checking the divisible condition in increasing order
            nums.sort()

            # Dictionary to store computed results (index -> largest subset from that index)
            cache = {}

            # Helper function to recursively find the largest divisible subset starting from 'index'
            def findSubset(i):
                  # Base case: reached the end of the list
                  if i == len(nums):
                        return []

                  # If we already computed the result for this index, return it
                  if i in cache:
                        return cache[i]

                  # Initialize the best subset with just the current number
                  maxSet = [nums[i]]

                  # Iterate through remaining numbers to build possible subsets
                  for j in range(i + 1, len(nums)):
                        # Only consider nums[j] if it is divisible by nums[i]
                        if nums[j] % nums[i] == 0:
                              # Build a new subset by combining current and recursive result
                              tempSet = [nums[i]] + findSubset(j)

                              # Update maxSet if this new one is longer
                              if len(tempSet) > len(maxSet):
                                    maxSet = tempSet

                  # Store the result in the cache dictionary
                  cache[i] = maxSet

                  # Return the best subset from current index
                  return maxSet

            # Final result to store the largest subset found among all possibilities
            resSet = []

            # Try to start the divisible subset from every index in the sorted array
            for i in range(len(nums)):
                  # Get the largest subset starting from 'i'
                  curSet = findSubset(i)

                  # Update the result if the new subset is longer
                  if len(curSet) > len(resSet):
                        resSet = curSet

            # Return the largest divisible subset found
            return resSet
