//! https://github.com/Prakhar-002/LEETCODE

import java.util.*;

class Solution {
      public boolean isNStraightHand(int[] hand, int groupSize) {
            // If the total number of cards is not divisible by groupSize, return false
            if (hand.length % groupSize != 0) {
                  return false;
            }

            // Create a frequency map to count occurrences of each card
            Map<Integer, Integer> freq = new HashMap<>();

            for (int card : hand) {
                  freq.put(card, freq.getOrDefault(card, 0) + 1); // Either inc by 1 or set to 0
            }  

            // Sort the hand array to process cards in ascending order
            Arrays.sort(hand);

            // Iterate through each card in the sorted hand
            for (int i = 0; i < hand.length; i++) {
                  // If the current card has already been used up, skip it
                  if (freq.get(hand[i]) == 0) {
                        continue;
                  }

                  // Try to form a group of size groupSize starting from the current card
                  for (int j = 0; j < groupSize; j++) {
                        int curCard = hand[i] + j;

                        // Try to form a group of size groupSize starting from the current card
                        if (freq.getOrDefault(curCard, 0) == 0) {
                              return false;
                        }

                        // Decrease the frequency of the current card
                        freq.put(curCard, freq.get(curCard) - 1);
                  }
            }

            // If all groups are successfully formed, return true
            return true;
      }
}