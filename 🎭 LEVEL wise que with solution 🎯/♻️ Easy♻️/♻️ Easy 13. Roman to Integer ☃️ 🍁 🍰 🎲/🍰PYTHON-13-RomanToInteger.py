#! https://github.com/Prakhar-002/LEETCODE


# Todo 📌 QUESTION NUMBER 13

# ? ⌚ Time complexity -> O(n) 👉 length of s

# ? 🧺 Space complexity -> O(1)

class Solution:
      def romanToInt(self, s: str) -> int:
            roman_values = {"M": 1000, "D": 500, "C": 100, "L": 50, "X": 10, "V": 5, "I": 1}

            array = [roman_values[char] for char in s]

            sum = 0
            for i in range(len(array)):
                  if i == len(array) - 1:
                        sum += array[i]
                  elif array[i] >= array[i + 1]:
                        sum += array[i]
                  else:
                        sum -= array[i]

            return sum
