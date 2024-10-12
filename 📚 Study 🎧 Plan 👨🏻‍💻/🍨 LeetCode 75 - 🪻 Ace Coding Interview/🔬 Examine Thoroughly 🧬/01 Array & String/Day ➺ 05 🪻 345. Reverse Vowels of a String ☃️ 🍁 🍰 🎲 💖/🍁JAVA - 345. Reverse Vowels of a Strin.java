//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 345

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = s.length()

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

public class Solution {
      public String reverseVowels(String s) {
            // Set of vowels for easy lookup, including both lowercase and uppercase
            Set<Character> vowels = new HashSet<>(Arrays.asList('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'));

            // Use StringBuilder to allow modification of the string
            StringBuilder sb = new StringBuilder(s);

            // Initialize two pointers: left starts at the beginning, right starts at the
            // end
            int left = 0;
            int right = sb.length() - 1;

            // Use two pointers to find and swap vowels until the pointers meet
            while (left < right) {
                  // Move the left pointer to the right until a vowel is found
                  while (left < right && !vowels.contains(sb.charAt(left))) {
                        left++; // Increment left pointer
                  }

                  // Move the right pointer to the left until a vowel is found
                  while (left < right && !vowels.contains(sb.charAt(right))) {
                        right--; // Decrement right pointer
                  }

                  // Swap the vowels when both pointers point to vowels
                  if (left < right) {
                        char temp = sb.charAt(left); // Store the vowel at left pointer
                        sb.setCharAt(left, sb.charAt(right)); // Set left to the vowel at right pointer
                        sb.setCharAt(right, temp); // Set right to the stored vowel

                        // Move the pointers inward to continue searching for vowels
                        left++;
                        right--;
                  }
            }

            // Convert the StringBuilder back to a string and return the result
            return sb.toString();
      }
}