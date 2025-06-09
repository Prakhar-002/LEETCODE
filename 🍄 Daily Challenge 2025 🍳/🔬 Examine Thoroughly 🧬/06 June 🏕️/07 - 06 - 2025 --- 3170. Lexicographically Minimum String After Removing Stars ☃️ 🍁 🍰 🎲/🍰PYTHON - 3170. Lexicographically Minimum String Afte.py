#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3170

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def clearStars(self, input_str: str) -> str:
            # Create 26 stacks, one for each lowercase letter
            char_indices = [[] for _ in range(26)] 

            # Convert the string to a list for easy modification
            chars = list(input_str)

            # Traverse each character in the list
            for idx, ch in enumerate(chars):
                  if ch != "*":
                        # Push the index of the letter into the corresponding stack
                        char_indices[ord(ch) - ord("a")].append(idx)
                  else:
                        # Find and remove the most recent smallest letter
                        for i in range(26):
                              if char_indices[i]:
                                    # Replace that letter with '*'
                                    chars[char_indices[i].pop()] = "*"
                                    break

            # Reconstruct the final string without '*' characters
            return "".join(ch for ch in chars if ch != "*")
