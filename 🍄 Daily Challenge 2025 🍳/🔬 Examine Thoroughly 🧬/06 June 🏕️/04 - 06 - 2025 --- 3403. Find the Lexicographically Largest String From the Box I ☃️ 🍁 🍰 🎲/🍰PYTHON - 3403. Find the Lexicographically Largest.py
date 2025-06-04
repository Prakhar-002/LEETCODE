#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3403

#? ⌚ Time complexity ➺ 	O(n × (n - numFriends + 1)) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺  O(n - numFriends + 1)

class Solution:
      def answerString(self, word: str, numFriends: int) -> str:
            # If there's only one friend, the whole word can be used directly
            if numFriends == 1:
                  return word

            # Calculate the maximum length of substring each friend will get
            length = len(word) - numFriends + 1

            # Variable to store the lexicographically greatest substring
            res = ""

            # Iterate through the word to get all substrings of length `length`
            for i in range(len(word)):
                  # Get the substring of desired length starting from index i
                  temp = word[i : i + length]

                  # If current substring is lexicographically greater than res
                  if temp > res:
                        res = temp                     # Update the result

            # Return the final result string
            return res
