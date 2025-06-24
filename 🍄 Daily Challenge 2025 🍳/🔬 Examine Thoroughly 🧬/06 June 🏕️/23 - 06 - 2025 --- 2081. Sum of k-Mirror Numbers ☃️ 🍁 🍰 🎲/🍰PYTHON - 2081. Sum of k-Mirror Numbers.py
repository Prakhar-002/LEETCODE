#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2081

#? ⌚ Time complexity ➺ O(n ^ 5) 👉🏻  n = 10

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def kMirror(self, k: int, n: int) -> int:
            # Helper function to check if a number is a palindrome in base-k
            def isPalindrome(x: int) -> bool:
                  digits = []
                  while x:
                        digits.append(x % k)
                        x //= k
                  return digits == digits[::-1]  # Check if base-k digits are palindromic

            left = 1            # Start of current length group (1-digit, 2-digit, etc.)
            count = 0           # Count of found valid k-mirror numbers
            total = 0           # Sum of valid numbers found

            while count < n:
                  right = left * 10   # End of current length group

                  # Try building palindromes with odd and even lengths
                  for op in [0, 1]:   # op = 0 → odd-length, op = 1 → even-length
                        for i in range(left, right):  # Generate half part (prefix) of palindrome
                              if count == n:
                                    break

                              # Build full palindrome number in base-10
                              num = i
                              x = i // 10 if op == 0 else i
                              while x:
                                    num = num * 10 + x % 10
                                    x //= 10

                              # If the number is palindromic in base-k too, accept it
                              if isPalindrome(num):
                                    total += num
                                    count += 1

                  left = right  # Move to the next digit group (10x longer)

            return total
