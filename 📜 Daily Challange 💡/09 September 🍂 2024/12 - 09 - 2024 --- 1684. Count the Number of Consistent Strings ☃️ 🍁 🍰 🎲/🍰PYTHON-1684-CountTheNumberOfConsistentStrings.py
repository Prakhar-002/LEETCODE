#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1684

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(words) m = len(allowed)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
            # set(allowed) => Converts allowed into a set for efficient membership checking.

            # all(ch in set(allowed) for ch in word) => Checks if all characters in each word are in the allowed set. 
            #                                           Returns True if the word is consistent, False otherwise.

            # sum(...) => Sums up the True values (which are treated as 1) for all consistent words, 
            #             resulting in the total count of consistent strings.

            return sum(all(ch in set(allowed) for ch in word) for word in words)


#!----------------------------------------------------------------------------------------------------

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