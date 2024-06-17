int appendCharacters(char* s, char* t) {
      int sIdx = 0, tIdx = 0;
      int sLen = strlen(s), tLen = strlen(t);

      while (sIdx < sLen && tIdx < tLen) {
            if (s[sIdx] == t[tIdx]) {
                  tIdx++;
            }
            sIdx++;
      }
      return tLen - tIdx;
} 