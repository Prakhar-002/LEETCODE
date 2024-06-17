class Solution:
      def longestCommonPrefix(self, strs: List[str]) -> str:
            if len(strs) == 0:
                  return ""

            for i in range(len(strs[0])):
                  for str in strs:
                        if i == len(str) or str[i] != strs[0][i]:
                              return strs[0][:i]

            return strs[0] 