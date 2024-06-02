class Solution {
      public boolean checkIfPangram(String sentence) {
            if(sentence.length() < 26){
                  return false;
            }
            
            char ch = 'a';

            while (ch < 'z' + 1) {
                  if (!sentence.contains(String.valueOf(ch))) {
                        return false;
                  }

                  ch++;
            }

            return true;
      }     
}