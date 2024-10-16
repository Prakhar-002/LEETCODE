#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1405

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = a + b + c

#? 🧺 Space complexity ➺ O(n)

import heapq

class Solution:
      def longestDiverseString(self, a: int, b: int, c: int) -> str:
            # Initialize an empty string to store the result and a max heap to maintain the counts of characters.
            happyString, maxHeap = "", []

            # Push the counts of 'a', 'b', and 'c' into the max heap as negative values 
            # (since Python's heapq is a min-heap by default, we negate the values to simulate a max-heap).
            for count, char in [(-a, "a"), (-b, "b"), (-c, "c")]:
                  if count != 0:  # Only add characters that have a non-zero count.
                        heapq.heappush(maxHeap, (count, char))

            # Loop while there are still characters available in the heap.
            while maxHeap:
                  # Pop the character with the highest remaining count.
                  count, char = heapq.heappop(maxHeap)

                  # Check if the last two characters in the result are the same as the current character.
                  # If they are, we need to avoid adding the same character again to prevent three consecutive occurrences.
                  if len(happyString) > 1 and happyString[-1] == happyString[-2] == char:
                        # If there's no other character available, break the loop as it's not possible to proceed.
                        if not maxHeap:
                              break

                        # Otherwise, pop the character with the second-highest remaining count.
                        count2, char2 = heapq.heappop(maxHeap)
                        happyString += char2  # Append the second character to the result.
                        count2 += 1  # Increase the count (since we are negating the values).

                        # If the second character still has remaining occurrences, push it back into the heap.
                        if count2:
                              heapq.heappush(maxHeap, (count2, char2))
                  else:
                        # If the last two characters are not the same, append the current character to the result.
                        happyString += char
                        count += 1  # Increase the count since we are negating the values.

                  # If the current character still has remaining occurrences, push it back into the heap.
                  if count:
                        heapq.heappush(maxHeap, (count, char))

            # Return the constructed happy string.
            return happyString

#!----------------------------------------------------------------------

#? ⌚ Time complexity ➺ O(n) 👉🏻 n = a + b + c

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def longestDiverseString(self, a: int, b: int, c: int) -> str:
            # Initialize a list to build the resulting string
            result = []

            # Total length of the string will be the sum of a, b, and c
            total_length = a + b + c

            # Initialize counters to keep track of consecutive occurrences of 'a', 'b', and 'c'
            continuous_a, continuous_b, continuous_c = 0, 0, 0

            # Loop until we have used up all characters
            for _ in range(total_length):

                  # Check if 'a' can be added based on its count and the rules:
                  # - 'a' is the most frequent letter remaining
                  # - Or if 'b' or 'c' has been used twice consecutively and 'a' is still available
                  if (a >= b and a >= c and continuous_a != 2) or \
                        (continuous_b == 2 and a > 0) or \
                        (continuous_c == 2 and a > 0):
                        # Append 'a' to the result
                        result.append('a')
                        # Decrease the count of 'a'
                        a -= 1
                        # Increase the counter for consecutive 'a's and reset other counters
                        continuous_a += 1
                        continuous_b = continuous_c = 0

                  # Check if 'b' can be added based on its count and the rules:
                  # - 'b' is the most frequent letter remaining
                  # - Or if 'a' or 'c' has been used twice consecutively and 'b' is still available
                  elif (b >= a and b >= c and continuous_b != 2) or \
                        (continuous_a == 2 and b > 0) or \
                        (continuous_c == 2 and b > 0):
                        # Append 'b' to the result
                        result.append('b')
                        # Decrease the count of 'b'
                        b -= 1
                        # Increase the counter for consecutive 'b's and reset other counters
                        continuous_b += 1
                        continuous_a = continuous_c = 0

                  # Check if 'c' can be added based on its count and the rules:
                  # - 'c' is the most frequent letter remaining
                  # - Or if 'a' or 'b' has been used twice consecutively and 'c' is still available
                  elif (c >= a and c >= b and continuous_c != 2) or \
                        (continuous_b == 2 and c > 0) or \
                        (continuous_a == 2 and c > 0):
                        # Append 'c' to the result
                        result.append('c')
                        # Decrease the count of 'c'
                        c -= 1
                        # Increase the counter for consecutive 'c's and reset other counters
                        continuous_c += 1
                        continuous_a = continuous_b = 0

            # Return the final built string
            return ''.join(result)


