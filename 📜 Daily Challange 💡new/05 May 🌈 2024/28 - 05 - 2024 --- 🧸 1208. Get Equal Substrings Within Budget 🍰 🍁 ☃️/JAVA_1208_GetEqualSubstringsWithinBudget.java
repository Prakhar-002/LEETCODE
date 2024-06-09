class Solution {
      public int equalSubstring(String s, String t, int maxCost) {
            int curCost = 0;
            int subStringLen = 0;

            int left = 0;

            for (int right = 0; right < s.length(); right++) {
                  curCost += Math.abs(s.charAt(right) - t.charAt(right)); 

                  while (curCost > maxCost) {
                        curCost -= Math.abs(s.charAt(left) - t.charAt(left));
                        left++;
                  }

                  subStringLen = Math.max(subStringLen, right - left +1);
            }

            return subStringLen;
      }
}