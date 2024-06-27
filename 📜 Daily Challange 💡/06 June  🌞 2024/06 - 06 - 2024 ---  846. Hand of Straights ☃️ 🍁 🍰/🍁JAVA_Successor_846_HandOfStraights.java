//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 846 

import java.util.*;
class Solution {
      public boolean findSuccessors(int[] hand, int groupSize, int i, int n) {
            int next = hand[i] + 1;
            hand[i] = -1;
            int count = 1;
            i += 1;
            while (i < n && count < groupSize) {
                  if (hand[i] == next) {
                        next = hand[i] + 1;
                        hand[i] = -1;
                        count++;
                  }
                  i++; 
            }
            if (count != groupSize){
                  return false;
            }
            else {
                  return true;
            }
      }

      public boolean isNStraightHand(int[] hand, int groupSize) {
            int n = hand.length;
            if (n % groupSize != 0){
                  return false;
            }
            Arrays.sort(hand);
            int i = 0;
            for (; i < n; i++) {
                  if (hand[i] >= 0) {
                        if (!findSuccessors(hand, groupSize, i, n)){
                              return false;
                        }
                  }
            }
            return true;
      }
}