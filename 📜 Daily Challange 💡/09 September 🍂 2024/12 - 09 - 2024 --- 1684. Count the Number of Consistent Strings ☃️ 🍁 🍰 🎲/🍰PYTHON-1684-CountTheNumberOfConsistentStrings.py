#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1684

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(words) m = len(allowed)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
            # Converts the string into a set to reduces the time complexity
            allowed_set = set(allowed)

            # This counter represents the number of consistent strings,
            # which initially is assumed to be equal to the total number of words
            consistentString = len(words)

            # loop iterates over each word in the `words`
            for word in words:
                  # `for` loop iterates over each character (`ch`) of the current word
                  for ch in word:
                        # If an inconsistent word is found (when a character is not in `allowed_set`)
                        if ch not in allowed_set:
                              # counter `consistentString` is decremented by 1
                              consistentString -= 1
                              # decremented only once per inconsistent word so break it here
                              break

            return consistentString