# //! https://github.com/Prakhar-002/LEETCODE

class Solution:
      def appendCharacters(self, s: str, t: str) -> int:
            # Index...
            sIdx = 0
            tIdx = 0
            # Length...
            sLen = len(s)
            tLen = len(t)

            while(sIdx < sLen and tIdx < tLen):
                  if(s[sIdx] == t[tIdx]):
                        tIdx += 1
                  sIdx += 1

            return tLen - tIdx 