class Solution:
      def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
            curCost = 0
            subStringLen = 0

            left = 0

            for right in range(len(s)):
                  curCost += abs(ord(s[right]) - ord(t[right]))

                  while curCost > maxCost :
                        curCost -= abs(ord(s[left]) - ord(t[left]))

                        left += 1

                  subStringLen = max(subStringLen, right - left + 1)

            return subStringLen