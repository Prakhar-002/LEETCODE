#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 717

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(bits)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def isOneBitCharacter(self, bits: List[int]) -> bool:
            # Initialize a pointer i to traverse the bits list
            i = 0
            
            # Loop through the bits until the second-to-last bit
            # because we only need to check if the final bit stands alone
            while i < len(bits) - 1:
                  
                  # If the current bit is 1, it means this is the start of a two-bit character
                  # Possible pairs: 10 or 11
                  # So, we skip the next bit by moving i ahead by 2
                  if bits[i] == 1:
                        i += 2
                  
                  # If the current bit is 0, it represents a one-bit character
                  # So, we move i ahead by 1
                  else:
                        i += 1

            # After processing all characters except possibly the last one:
            # - If i stops exactly at the last bit (len(bits) - 1), 
            #   it means the last bit is a single one-bit character (0).
            # - If i moves past the end (equals len(bits)), 
            #   it means the last bit was part of a two-bit character.
            return i == len(bits) - 1
