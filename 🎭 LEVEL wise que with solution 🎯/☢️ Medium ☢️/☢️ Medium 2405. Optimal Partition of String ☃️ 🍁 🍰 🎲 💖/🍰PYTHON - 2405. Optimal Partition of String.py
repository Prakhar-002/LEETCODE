#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2405

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def partitionString(self, s: str) -> int:
            partition_count = 0  # Count of partitions
            seen = [0] * 26  # Array to track seen characters

            # Iterate through each character in the string
            for ch in s:
                  index = ord(ch) - ord('a')  # Convert character to index (0-25)

                  # If the character is already seen, start a new partition
                  if seen[index]:
                        partition_count += 1  # Increment partition count
                        seen = [0] * 26  # Reset seen array

                  # Mark the current character as seen
                  seen[index] = 1

            return partition_count + 1  # Add one to count the last partition
