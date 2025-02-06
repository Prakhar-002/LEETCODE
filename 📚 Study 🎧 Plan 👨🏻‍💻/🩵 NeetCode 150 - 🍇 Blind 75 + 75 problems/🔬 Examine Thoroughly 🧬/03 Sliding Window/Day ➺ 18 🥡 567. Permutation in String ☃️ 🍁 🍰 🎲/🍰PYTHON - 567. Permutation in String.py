#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 567

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s2)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def checkInclusion(self, s1: str, s2: str) -> bool:
            # a longer string cannot be a permutation of any part of a shorter string
            if len(s1) > len(s2):
                  # so immediately returns `False`
                  return False

            # creates two frequency arrays, `s1Digits` and `s2Digits` each of size 26
            s1Digits, s2Digits = [0] * 26, [0] * 26

            # iterates through the first `len(s1)` characters of `s1` and `s2`
            for i in range(len(s1)):
                  # incrementing their frequencies in the `s1Digits` arrays
                  s1Digits[ord(s1[i]) - ord('a')] += 1
                  # incrementing their frequencies in the `s2Digits` arrays
                  s2Digits[ord(s2[i]) - ord('a')] += 1

            # initializes a counter `matches` to track how many characters 
            # have the same frequency in `s1  and the current window of `s2`
            matches = 0

            # iterating through the frequency arrays
            for i in range(26):
                  # incrementing `matches` when frequencies match
                  matches += (1 if s1Digits[i] == s2Digits[i] else 0)

            left = 0

            # Sliding Window Starting from the end of the initial window (`len(s1)`)
            # moves through `s2` one character at a time
            for right in range(len(s1), len(s2)):
                  # If at any point `matches` equals 26
                  # all characters in the current window have the same frequency as in `s1`
                  if matches == 26:
                        # returns `True`
                        return True

                  # For each new character added to the window
                  index = ord(s2[right]) - ord('a')
                  # it updates `s2Digits`
                  s2Digits[index] += 1

                  # if the frequencies now match
                  if s1Digits[index] == s2Digits[index]:
                        # this causes `matches` to increase
                        matches += 1
                  # if they no longer match
                  elif s1Digits[index] + 1 == s2Digits[index]:
                        # this causes `matches` to decrease
                        matches -= 1

                  # when a character is removed from the beginning of the window
                  index = ord(s2[left]) - ord('a')
                  # it updates `s2Digits`
                  s2Digits[index] -= 1

                  # if the frequencies now match
                  if s1Digits[index] == s2Digits[index]:
                        # this causes `matches` to increase
                        matches += 1
                  # if they no longer match
                  elif s1Digits[index] - 1 == s2Digits[index]:
                        # this causes `matches` to decrease
                        matches -= 1

                  # increments the `left` index to move the window forward
                  left += 1

            # Check `matches` for last index weather permutation or not
            return matches == 26