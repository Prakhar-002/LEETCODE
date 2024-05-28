int equalSubstring(char *s, char *t, int maxCost){
      int curCost = 0;
      int subStringLen = 0;

      int left = 0;

      for (int right = 0; right < strlen(s); right++) {
            curCost += abs(s[right] - t[right]);

            while (curCost > maxCost)
            {
                  curCost -= abs(s[left] - t[left]);
                  left++;
            }

            subStringLen = max(subStringLen, right - left + 1);
      }

      return subStringLen;
}