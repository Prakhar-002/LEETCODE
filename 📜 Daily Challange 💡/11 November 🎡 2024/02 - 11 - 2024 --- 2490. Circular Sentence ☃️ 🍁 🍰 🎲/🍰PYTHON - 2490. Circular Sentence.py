#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2490

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(strArr)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def isCircularSentence(self, sentence: str) -> bool:
            # Splitting the sentence into words automatically removes extra spaces
            strArr = sentence.split(" ")

            n = len(strArr)

            # Iterate through the words
            for i in range(n):
                  # Check if the last character of the current word matches the first character of the next word
                  if strArr[i][-1] != strArr[(i + 1) % n][0]:
                        return False

            # If all conditions are met, return True
            return True
