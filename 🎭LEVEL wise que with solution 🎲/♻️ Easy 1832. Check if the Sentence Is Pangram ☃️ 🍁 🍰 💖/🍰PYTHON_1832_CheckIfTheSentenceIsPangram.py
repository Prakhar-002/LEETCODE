class Solution:
      def checkIfPangram(self, sentence: str) -> bool:
            if len(sentence) < 26:
                  return False
            
            ch = ord('a')

            while(ch < ord('z') + 1):
                  if(sentence.find(chr(ch)) < 0):
                        return False
                  
                  ch += 1

            return True