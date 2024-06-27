# //! https://github.com/Prakhar-002/LEETCODE


# Todo 📌 QUESTION NUMBER 409 

class Solution:
      def longestPalindrome(self, s: str) -> int:
            freq = [0] * 52

            max_pali = 0
            is_odd = False

            for ch in s:
                  if ord(ch) > 96:
                        freq[ord(ch) - ord('a')] += 1

                  else :
                        freq[(ord(ch) - ord('A')) + 26] += 1 

            for n in freq :
                  if n % 2 == 0:
                        max_pali += n
                  else :
                        is_odd = True
                        max_pali += n - 1

            if is_odd :
                  return max_pali + 1
            
            return max_pali


