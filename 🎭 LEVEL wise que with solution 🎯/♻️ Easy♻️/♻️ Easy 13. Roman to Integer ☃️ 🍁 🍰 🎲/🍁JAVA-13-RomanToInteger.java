//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 13

//? ⌚ Time complexity -> O(n) 👉 length of s

//? 🧺 Space complexity -> O(1) 

class Solution {
      public int romanToInt(String s) {
            int[] array = new int[s.length()];

            for (int i = 0; i < s.length(); i++) {
                  switch (s.charAt(i)) {
                        case 'M':
                              array[i] = 1000;
                              break;
                        case 'D':
                              array[i] = 500;
                              break;
                        case 'C':
                              array[i] = 100;
                              break;
                        case 'L':
                              array[i] = 50;
                              break;
                        case 'X':
                              array[i] = 10;
                              break;
                        case 'V':
                              array[i] = 5;
                              break;
                        default:
                              array[i] = 1;
                  }
            }

            int sum = 0;
            for (int i = 0; i < array.length; i++) {
                  if (i == array.length - 1) {
                        sum += array[i];
                  } else if (array[i] >= array[i + 1]) {
                        sum += array[i];
                  } else {
                        sum -= array[i];
                  }
            }

            return sum;
      }
}

// ----------------------------------------------------------------

//* Using HashMap

class Solution {
      public int romanToInt(String s) {
            Map<Character, Integer> romanValues = new HashMap<>();
            romanValues.put('M', 1000);
            romanValues.put('D', 500);
            romanValues.put('C', 100);
            romanValues.put('L', 50);
            romanValues.put('X', 10);
            romanValues.put('V', 5);
            romanValues.put('I', 1);

            int[] array = new int[s.length()];
            for (int i = 0; i < s.length(); i++) {
                  array[i] = romanValues.get(s.charAt(i));
            }

            int sum = 0;
            for (int i = 0; i < array.length; i++) {
                  if (i == array.length - 1) {
                        sum += array[i];
                  } else if (array[i] >= array[i + 1]) {
                        sum += array[i];
                  } else {
                        sum -= array[i];
                  }
            }

            return sum;
      }
}