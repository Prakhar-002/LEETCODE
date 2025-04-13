#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3272

#? ⌚ Time complexity ➺ O(n log n * (10 ^ m)) 👉🏻  m = (n + 1) / 2

#? 🧺 Space complexity ➺ O(n * (10 ^ m))

from math import factorial

class Solution:
      def countGoodIntegers(self, n: int, k: int) -> int:
            uniqueDigitPatterns = set()  # To store unique digit patterns of palindromes divisible by k

            halfLengthBase = 10 ** ((n - 1) // 2)  # Starting point for half part of palindromes
            skipMiddle = n % 2  # 1 if n is odd (we skip the first character of the reverse while mirroring)

            # Generate all palindromes of n digits
            for half in range(halfLengthBase, halfLengthBase * 10):
                  halfStr = str(half)

                  # Create the full palindrome by mirroring (skip the middle digit if n is odd)
                  if skipMiddle:
                        fullPalindromeStr = halfStr + halfStr[::-1][1:]
                  else:
                        fullPalindromeStr = halfStr + halfStr[::-1]

                  fullPalindrome = int(fullPalindromeStr)

                  # Check if the palindrome is divisible by k
                  if fullPalindrome % k == 0:
                        # Sort the digits to uniquely identify digit combinations
                        digitPattern = "".join(sorted(fullPalindromeStr))
                        uniqueDigitPatterns.add(digitPattern)

            # Precompute factorials up to n for permutation calculations
            factorials = [factorial(i) for i in range(n + 1)]

            totalCount = 0  # Final result: count of good integers

            # For each unique digit pattern
            for digitPattern in uniqueDigitPatterns:
                  digitFrequency = [0] * 10  # Count frequency of each digit (0-9)

                  for digit in digitPattern:
                        digitFrequency[int(digit)] += 1  # Count each digit

                  # Total permutations ignoring leading zeros (so first digit cannot be 0)
                  permutations = (n - digitFrequency[0]) * factorials[n - 1]

                  # Divide by factorial of counts of repeated digits
                  for freq in digitFrequency:
                        permutations //= factorials[freq]

                  totalCount += permutations  # Add valid permutations to total

            return totalCount
