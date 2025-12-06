#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1415

#? ⌚ Time complexity ➺ O(n)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def getHappyString(self, n: int, k: int) -> str:
            # Calculate the total number of happy strings of length 'n'
            total_happy = 3 * (2 ** (n - 1))  # 3 * (2^(n-1))

            # If k is greater than total_happy, return an empty string
            if k > total_happy:
                  return ""

            # List to store the lexicographically ordered string
            lex_string = []

            # Available character choices
            choices = "abc"
            left, right = 1, total_happy

            # Constructing the k-th happy string
            for i in range(n):
                  cur = left
                  partition_size = (right - left + 1) // len(choices)

                  for ch in choices:
                        # Check if k falls within the current partition
                        if k in range(cur, cur + partition_size):
                              lex_string.append(ch)  # Append selected character to lex_string
                              left = cur
                              right = cur + partition_size - 1
                              # Remove the selected character from choices to avoid adjacent repetition
                              choices = "abc".replace(ch, "")
                              break

                        # Move to the next partition
                        cur += partition_size

            return "".join(lex_string)  # Return the final happy string

#!-----------------------------------------------------------------------------------

#? ⌚ Time complexity ➺ O(n)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def getHappyString(self, n: int, k: int) -> str:
            # Available characters to use in happy strings
            chars = ['a', 'b', 'c']
            choice = ''  # To track the last chosen character
            lex_string = []

            # Calculate the total number of happy strings of length 'n'
            total_happy = 2 ** (n - 1)
            if k > 3 * total_happy:
                  return ""  # If k is out of range, return an empty string

            while total_happy > 0:
                  # Determine the index of the character to choose
                  index = (k - 1) // total_happy
                  prevIdx = index

                  # Adjust index to ensure no adjacent characters are the same
                  if choice == 'a':
                        index += 1
                  elif choice == 'b' and index == 1:
                        index += 1

                  # Choose the character and append to lex_string
                  choice = chars[index]
                  lex_string.append(choice)

                  # Update k and total_happy for the next iteration
                  k = k - total_happy * prevIdx
                  total_happy //= 2

            return "".join(lex_string)