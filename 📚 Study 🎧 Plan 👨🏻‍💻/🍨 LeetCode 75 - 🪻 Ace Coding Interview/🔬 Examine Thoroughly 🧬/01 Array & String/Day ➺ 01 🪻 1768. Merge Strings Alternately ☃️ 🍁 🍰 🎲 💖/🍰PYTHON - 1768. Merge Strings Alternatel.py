#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1768

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def mergeAlternately(self, word1: str, word2: str) -> str:
            # an empty string which will store the merged result
            merge = ""

            # first pointer for traversing `word1`
            ptrOne = 0
            # second pointer for traversing `word2`
            ptrTwo = 0

            # loop continues as long as both `ptrOne` is < the length of `word1` 
            # and `ptrTwo` is < the length of `word2`
            while len(word1) > ptrOne and len(word2) > ptrTwo:
                  # appends the char from `word1` first
                  merge += word1[ptrOne]
                  # increment the pointer for `word1`
                  ptrOne += 1

                  # then appends the char from `word2`
                  merge += word2[ptrTwo]
                  # increment the pointer for `word2`
                  ptrTwo += 1

            # if `word1` has some char remain
            while len(word1) > ptrOne:
                  # append remaining char
                  merge += word1[ptrOne]
                  # inc the pointer for accessing the char
                  ptrOne += 1

            # if `word2` has some char remain
            while len(word2) > ptrTwo:
                  # append remaining char from `word2`
                  merge += word2[ptrTwo]
                  # inc the pointer for accessing the char
                  ptrTwo += 1

            # returns the merged string
            return merge