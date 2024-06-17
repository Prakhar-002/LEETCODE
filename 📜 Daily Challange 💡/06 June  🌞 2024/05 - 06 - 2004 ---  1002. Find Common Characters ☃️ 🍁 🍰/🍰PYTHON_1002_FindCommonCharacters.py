class Solution:
      def commonChars(self, words: List[str]) -> List[str]:
            word_cnt = Counter(words[0]) # first word

            for word in words:
                  cur_cnt = Counter(word)
                  for ch in word_cnt:
                        word_cnt[ch] = min(word_cnt[ch], cur_cnt[ch])

            res = [] 

            for ch in word_cnt: # remaining char 
                  for i in range(word_cnt[ch]):
                        res.append(ch)

            return res



