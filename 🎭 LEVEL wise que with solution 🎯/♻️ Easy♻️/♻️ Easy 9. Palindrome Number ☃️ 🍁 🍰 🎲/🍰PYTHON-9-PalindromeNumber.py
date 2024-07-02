#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 9

#? ⌚ Time complexity -> O(LogN) 👉 Digits of given X

#? 🧺 Space complexity -> O(1) 

class Solution:
      def isPalindrome(self, x: int) -> bool:
            num = x
            rev = 0
            while x > 0:
                  r = x % 10
                  rev = rev * 10 + r
                  x = x // 10

            return num == rev