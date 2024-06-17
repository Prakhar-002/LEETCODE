class Solution {
      public boolean checkRecord(String s) {
            if (s.contains("LLL")) {
                  return false;
            }

            int absCount = 0;

            for (int i = 0; i < s.length(); i++) {
                  if (s.charAt(i) == 'A') {
                        absCount++;
                  }

                  if (absCount > 1) {
                        return false;
                  }
            }

            return true;
      }
}