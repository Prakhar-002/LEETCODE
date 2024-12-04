#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2825

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(str1)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def canMakeSubsequence(self, str1: str, str2: str) -> bool:
            # Pointer to track the position in the str2 string
            target_index = 0

            # Iterate through each character in the str1 string
            for source_index in range(len(str1)):
                  source_char = str1[source_index]
                  target_char = str2[target_index]

                  # Check if we can match the current str2 character
                  # Conditions:
                  # 1. Characters are equal, or
                  # 2. The str2 character is the next in sequence (cyclic for 'z'->'a'), or
                  # 3. The str1 character is 'z' and the str2 character is 'a'.
                  if target_index < len(str2) and (
                        source_char == target_char or 
                        ord(target_char) - ord(source_char) == 1 or 
                        (source_char == 'z' and target_char == 'a')
                  ):
                        target_index += 1  # Move to the next character in the str2 string

                        # If all characters in str2 are matched, return True
                        if target_index == len(str2):
                              return True

            # Return True if all characters in str2 are matched, False otherwise
            return target_index == len(str2)
