//! https://github.com/Prakhar-002/LEETCODE

import java.util.*;

class Solution {
      public int[] maxSlidingWindow(int[] nums, int k) {
            int left = 0;
            // making a array of size = length - k(given) + 1 cause
            // Ex. nums = [1,3,-1,-3,5,3,6,7], k = 3
            // Output is = [3,3,5,5,6,7]
            int maxWindow[] = new int[nums.length - k + 1];
            // pointer for storing value in maxWindow
            int i = 0;

            // A deque that stores the index of nums
            Deque<Integer> decDeq = new LinkedList<>();

            // Traverse the whole list
            for (int right = 0; right < nums.length; right++) {
                  // Whenever we get a big value well pop smaller value from our queue
                  while (!decDeq.isEmpty() && nums[decDeq.peekLast()] < nums[right]) {
                        decDeq.pollLast();
                  }

                  // append the value if we get a small value cause we've to maintain the decreasing queue
                  decDeq.offerLast(right);

                  // if our window get bigger than k
                  // cause we are storing index so our left pointer will be out of bound from our window
                  if (left > decDeq.peekFirst()) {
                        // so we'll pop from left
                        decDeq.pollFirst();
                  }

                  // size should at least k so size will (right pointer + 1)
                  if ((right + 1) >= k) {
                        // we'll store the value that is most left to our q in our array
                        maxWindow[i++] = nums[decDeq.peekFirst()];
                        // once we take one window we'll update our window by left++
                        left++;
                  }
            }

            return maxWindow;
      }
}

