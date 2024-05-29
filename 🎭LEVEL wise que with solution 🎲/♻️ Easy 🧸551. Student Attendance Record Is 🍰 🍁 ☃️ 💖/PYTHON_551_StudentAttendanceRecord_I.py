class Solution:
      def checkRecord(self, s: str) -> bool:

            return False if s.find("LLL") >= 0 or s.count('A') > 1 else True