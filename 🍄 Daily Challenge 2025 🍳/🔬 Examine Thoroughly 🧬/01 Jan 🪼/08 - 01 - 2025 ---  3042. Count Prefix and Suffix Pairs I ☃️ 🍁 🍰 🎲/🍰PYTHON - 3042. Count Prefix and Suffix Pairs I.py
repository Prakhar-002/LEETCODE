#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3042

# ? ⌚ Time complexity ➺ O(n ^ 2 * m) 👉🏻  n = No. of words

# ? 🧺 Space complexity ➺ O(1)        👉🏻  m = Max len(one word)

class Solution:
      def countPrefixSuffixPairs(self, words: List[str]) -> int:
            n = len(words)
            count = 0

            # Step 1: Iterate through each pair of words
            for i in range(n):
                  for j in range(i + 1, n):
                        str1 = words[i]
                        str2 = words[j]

                        # Step 2: Skip if the first string is larger than the second
                        if len(str1) > len(str2):
                              continue

                        # Step 3: Check if str1 is both the prefix and suffix of str2
                        if str2.startswith(str1) and str2.endswith(str1):
                              count += 1

            # Step 4: Return the total count of prefix-suffix pairs
            return count
