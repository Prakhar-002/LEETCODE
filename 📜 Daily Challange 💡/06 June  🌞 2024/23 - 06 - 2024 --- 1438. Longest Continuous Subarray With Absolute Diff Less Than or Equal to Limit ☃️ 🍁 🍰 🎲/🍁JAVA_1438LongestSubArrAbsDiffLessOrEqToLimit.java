//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 1438 

import java.util.*;

class Solution {
      public int longestSubarray(int[] nums, int limit) {
            // Increasing deq which will max at first position of an subArray
            ArrayDeque<Integer> incDeq = new ArrayDeque<>();
            // Decreasing deq which will min at first position of an subArray
            ArrayDeque<Integer> decDeq = new ArrayDeque<>();
            int left = 0;
            int subArray = 0;
            for (int right = 0; right < nums.length; right++) {
                  // cause we have to make this deque increasing so we'll remove if last elem is
                  // greater than upcoming elem
                  // cause this deq will store max at first position
                  while (!incDeq.isEmpty() && incDeq.getLast() > nums[right]) {
                        incDeq.removeLast();
                  }
                  // cause we have to make this deque decreasing so we'll remove if last elem is
                  // less than upcoming elem
                  // cause this deq will store min at first position
                  while (!decDeq.isEmpty() && decDeq.getLast() < nums[right]) {
                        decDeq.removeLast();
                  }

                  // simply add the coming elem in both deq in last of deq
                  incDeq.addLast(nums[right]);
                  decDeq.addLast(nums[right]);

                  // If condition is not true then we'll shift out left pointers
                  while (decDeq.getFirst() - incDeq.getFirst() > limit) {
                        // if we update our left pointer we have to remove left pointer elem from both
                        // deque
                        // if left pointer value is present in decDeq remove it
                        if (decDeq.getFirst() == nums[left]) {
                              decDeq.removeFirst();
                        }
                        // if left pointer value is present in incDeq remove it
                        if (incDeq.getFirst() == nums[left]) {
                              incDeq.removeFirst();
                        }
                        // finally update our left pointer
                        left++;
                  }
                  // Take the max of subArray and (r - l + 1)
                  subArray = Math.max(subArray, right - left + 1);
            }
            return subArray;
      }
}