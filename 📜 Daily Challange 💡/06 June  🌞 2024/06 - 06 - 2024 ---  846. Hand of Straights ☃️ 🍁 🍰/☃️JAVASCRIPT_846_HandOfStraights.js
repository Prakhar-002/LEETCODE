//! https://github.com/Prakhar-002/LEETCODE

var isNStraightHand = function (hand, groupSize) {
      // If the total number of cards is not divisible by groupSize, return false
      if (hand.length % groupSize !== 0) {
            return false;
      }

      // Create a frequency map to count occurrences of each card
      const freq = new Map();
      for (let card of hand) {
            freq.set(card, (freq.get(card) || 0) + 1);
      }

      // Sort the hand array to process cards in ascending order
      hand.sort((a, b) => a - b);

      // Iterate through each card in the sorted hand
      for (let card of hand) {
            // If the current card has already been used up, skip it
            if (freq.get(card) === 0) {
                  continue;
            } 

            // Try to form a group of size groupSize starting from the current card
            for (let i = 0; i < groupSize; i++) {
                  const curCard = card + i;

                  // If the current card needed for the group is not available, return false
                  if (!freq.get(curCard) || freq.get(curCard) === 0) {
                        return false;
                  }

                  // Decrease the frequency of the current card
                  freq.set(curCard, freq.get(curCard) - 1);
            }
      }

      // If all groups are successfully formed, return true
      return true;
}