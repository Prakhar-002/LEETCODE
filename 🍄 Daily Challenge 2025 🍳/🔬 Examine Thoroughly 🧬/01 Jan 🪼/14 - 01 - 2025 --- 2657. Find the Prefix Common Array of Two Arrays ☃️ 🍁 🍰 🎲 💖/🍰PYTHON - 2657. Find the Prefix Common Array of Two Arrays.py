#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2657

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(A)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def findThePrefixCommonArray(self, A: List[int], B: List[int]) -> List[int]:
            # Initialize an integer to keep track of seen elements in A and B
            seen_bits = 0

            # Variable to count the number of common elements encountered so far
            common_count = 0

            # List to store the prefix common counts
            prefix_common = []

            # Iterate through the arrays A and B simultaneously
            for i in range(len(A)):
                  # Check if the current element in A has already been seen using bits
                  if seen_bits & (1 << (A[i] - 1)):  # Using 1-based indexing
                        common_count += 1

                  # Set the corresponding bit for the element in A
                  seen_bits |= (1 << (A[i] - 1))

                  # Check if the current element in B has already been seen using bits
                  if seen_bits & (1 << (B[i] - 1)):
                        common_count += 1

                  # Set the corresponding bit for the element in B
                  seen_bits |= (1 << (B[i] - 1))

                  # Append the current count of common elements to the prefix_common list
                  prefix_common.append(common_count)

            # Return the final list of prefix common counts
            return prefix_common


#!------------------------------------------------------------------------------------- 

#* Using HashSet

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(A)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def findThePrefixCommonArray(self, A: List[int], B: List[int]) -> List[int]:
            # Initialize a set to keep track of elements that have been seen
            seen_elements = set()

            # Variable to count the number of common elements encountered so far
            common_count = 0

            # List to store the prefix common counts
            prefix_common = []

            # Iterate through the arrays A and B simultaneously
            for i in range(len(A)):
                  # If the current element of A has already been seen, it is a common element
                  if A[i] in seen_elements:
                        common_count += 1

                  # Add the current element of A to the seen set
                  seen_elements.add(A[i])

                  # If the current element of B has already been seen, it is a common element
                  if B[i] in seen_elements:
                        common_count += 1

                  # Add the current element of B to the seen set
                  seen_elements.add(B[i])

                  # Append the current count of common elements to the prefix_common list
                  prefix_common.append(common_count)

            # Return the final list of prefix common counts
            return prefix_common

#!------------------------------------------------------------------------------------- 

#* Using freq Array

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(A)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def findThePrefixCommonArray(self, A: List[int], B: List[int]) -> List[int]:
            # Determine the size of the input arrays
            n = len(A)

            # Initialize a frequency array to track occurrences of elements in A and B
            # The size is n+1 because elements in A and B are assumed to be within the range [1, n]
            freq = [0] * (n + 1)

            # Initialize a list to store the count of prefix common elements
            prefix_common = []

            # Initialize a counter to keep track of common elements seen so far
            permutations = 0

            # Iterate through both arrays A and B simultaneously
            for i in range(n):
                  # Increment the frequency count for the current element in A
                  freq[A[i]] += 1

                  # If the element from A has been seen twice, it contributes to the common count
                  if freq[A[i]] == 2:
                        permutations += 1

                  # Increment the frequency count for the current element in B
                  freq[B[i]] += 1

                  # If the element from B has been seen twice, it contributes to the common count
                  if freq[B[i]] == 2:
                        permutations += 1

                  # Append the current count of common elements to the prefix_common list
                  prefix_common.append(permutations)

            # Return the final prefix_common list
            return prefix_common



