#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 873

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(arr)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def lenLongestFibSubseq(self, arr: List[int]) -> int:
            # Create a set of array elements for quick lookup
            arr_set = set(arr)

            # Initialize variable to store the maximum length of any valid Fibonacci-like subsequence found so far
            maxFibLength = 0

            # Iterate through each element in the array (this is the first element of the subsequence pair)
            for i in range(len(arr) - 1):
                  # Choose each next element as the second element of the subsequence pair
                  for j in range(i + 1, len(arr)):
                        # Start with a pair (arr[i], arr[j])
                        prev, cur = arr[i], arr[j]

                        # The next element must be the sum of the previous two
                        nxt = prev + cur

                        # Minimum length of a valid Fibonacci-like subsequence is 2
                        length = 2

                        # Continue finding next elements as long as they exist in the array
                        while nxt in arr_set:
                              # Increase subsequence length
                              length += 1

                              # Shift values forward: cur becomes prev, nxt becomes cur
                              prev, cur = cur, nxt

                              # Compute the new next element
                              nxt = prev + cur

                              # Update the maximum length found so far
                              maxFibLength = max(maxFibLength, length)

            # Return the maximum length found
            return maxFibLength
