#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2014

#? ⌚ Time complexity ➺ O(n + m! * k * m) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(n) ->  m <= 7

class Solution:
      def longestSubsequenceRepeatedK(self, s: str, k: int) -> str:
            # Convert each character in the string to its alphabet index (0 for 'a', ..., 25 for 'z')
            s = [ord(c) - ord("a") for c in s]

            n = len(s)

            # Create a next-position table:
            # nxt[i][c] = the first index ≥ i where character `c` occurs in s
            nxt = [[n] * 26 for _ in range(n + 1)]
            for i in range(n - 1, -1, -1):
                  nxt[i] = nxt[i + 1][:]           # Copy next row
                  nxt[i][s[i]] = i                 # Set current character's next position

            # Helper function to check if a sequence repeated k times is a subsequence of s
            def isSubsequence(seq: Tuple[int, ...], k: int) -> bool:
                  i = -1                           # Start before the first index
                  for _ in range(k):               # Repeat k times
                        for c in seq:              # Check each character in the sequence
                              i = nxt[i + 1][c]    # Move to the next position of c
                              if i == n:           # Reached end of s, so invalid
                                    return False
                  return True

            # Count character frequencies
            cnt = Counter(s)

            # Filter only characters that appear at least k times
            a = [ch for ch, freq in cnt.items() for _ in range(freq // k)]

            # Try permutations in reverse lexicographic order
            a.sort(reverse=True)

            # Try all permutations from longest length to shortest
            for i in range(len(a), 0, -1):
                  for seq in permutations(a, i):
                        if isSubsequence(seq, k):
                              # Convert back from numbers to characters
                              return "".join(ascii_lowercase[c] for c in seq)

            return ""
