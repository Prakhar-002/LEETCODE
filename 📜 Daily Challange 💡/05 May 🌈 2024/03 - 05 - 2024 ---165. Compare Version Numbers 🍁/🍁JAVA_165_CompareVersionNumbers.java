//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 165 

class Solution {
      public int compareVersion(String version1, String version2) {
            int i = 0, j = 0;
            int len1 = version1.length(), len2 = version2.length();
            // Apply loop for the whole string
            while (i < len1 || j < len2) {
                  int num1 = 0, num2 = 0;
                  // Extract num up to one "." from version1
                  while (i < len1 && version1.charAt(i) != '.') {
                        num1 = num1 * 10 + (version1.charAt(i++) - '0');
                  }
                  // Extract num up to one "." from version2
                  while (j < len2 && version2.charAt(j) != '.') {
                        num2 = num2 * 10 + (version2.charAt(j++) - '0');
                  }
                  // if num1 is greater return 1
                  if (num1 > num2){
                        return 1;
                  }
                  // if num2 is greater return -1
                  else if (num1 < num2){
                        return -1;
                  }
                  // inc i for skipping .
                  if (i < len1) {
                        i++;
                  }
                  // inc j for skipping .
                  if (j < len2) {
                        j++;
                  }
            }
            // if both version are same return 0
            return 0;
      }
}