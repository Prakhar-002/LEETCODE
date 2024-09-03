#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1945

#? ⌚ Time complexity ➺ O(n * k) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def getLucky(self, s: str, k: int) -> int:
            # This will store the numeric conversion of each character from the string `s`
            numberStr = ''

            for ch in s:
                  # expression converts a lowercase English letter to its position in the alphabet: 
                  # 'a' becomes 1, 'b' becomes 2, ..., 'z' becomes 26
                  numberStr += str(ord(ch) - ord('a') + 1)

            # Summation of digits up to `k` times
            while k > 0:
                  # This variable will store the sum of the digits of `numberStr` during each iteration
                  tempNum = 0
                  for ch in numberStr:
                        # converts each character to an integer, and adds it to `tempNum`
                        tempNum += int(ch)

                  # `numberStr` is updated to be the string representation of `tempNum`
                  numberStr = str(tempNum)
                  # The loop decreases `k` by 1 with each iteration until `k` equals 0
                  k -= 1

            # converts `numberStr` back to an integer and return
            return int(numberStr)

#*-------------------------------------------------------------- 

class Solution:
      def getLucky(self, s: str, k: int) -> int:
            def convert(s):
                  #  convert each character in that string to its alphabetical position
                  return ''.join(str(ord(ch) - ord('a') + 1) for ch in s)

            def transform(num):
                  # sums the digits of this number
                  return sum(int(n) for n in str(num))

            # Convert the string to the integer
            num = convert(s)

            # Perform the transform operation k times
            for _ in range(k):
                  num = transform(num)

            return num