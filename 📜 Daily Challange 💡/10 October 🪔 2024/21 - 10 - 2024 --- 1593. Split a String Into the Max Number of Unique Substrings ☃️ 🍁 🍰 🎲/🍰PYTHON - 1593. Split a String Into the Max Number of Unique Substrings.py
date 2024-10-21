#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1593

#? ⌚ Time complexity ➺ O(2 ^ n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      # Helper function to perform depth-first search (DFS) to find the maximum
      # number of unique substrings we can split the string 's' into.
      def maxUniqueFinderDfs(self, i, cur_set, s):
            # Variable to track the maximum number of unique substrings found
            uniqueSubString = 0

            # Base case: if 'i' reaches the end of the string, return 0
            if i == len(s):
                  return 0

            # Loop through the string starting from index 'i'
            for j in range(i, len(s)):
                  # Generate the substring from index 'i' to 'j'
                  subString = s[i : j + 1]

                  # If the substring is already in the set, skip it
                  if subString in cur_set:
                        continue

                  # Add the substring to the set of unique substrings
                  cur_set.add(subString)

                  # Recursively call the function for the next index (j + 1)
                  # and update the maximum unique substring count
                  uniqueSubString = max (
                        uniqueSubString, 
                        1 + self.maxUniqueFinderDfs(j + 1, cur_set, s)
                  )

                  # Backtrack: remove the substring from the set
                  cur_set.remove(subString)

            # Return the maximum number of unique substrings found
            return uniqueSubString

      # Main function to initiate the DFS process
      def maxUniqueSplit(self, s: str) -> int:
            # Start DFS from index 0 with an empty set of substrings
            return self.maxUniqueFinderDfs(0, set(), s)
