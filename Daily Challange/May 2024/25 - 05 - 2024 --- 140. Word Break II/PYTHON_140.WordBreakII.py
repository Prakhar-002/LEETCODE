class Solution:
      def wordBreak(self, s: str, wordDict: List[str]) -> List[str]:
            wordDict = set(wordDict)

            def backtracking(i):
                  if i == len(s):
                        res.append(" ".join(cur))
                        return
                  
                  for j in range(i, len(s)):
                        word = s[i:j+1]
                        if word in wordDict:
                              cur.append(word)
                              backtracking(j + 1)
                              cur.pop()


            res = []
            cur = []
            backtracking(0)
            return res