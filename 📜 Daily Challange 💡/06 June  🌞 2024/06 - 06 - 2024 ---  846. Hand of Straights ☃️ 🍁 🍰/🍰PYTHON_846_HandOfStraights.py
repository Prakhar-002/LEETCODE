#! https://github.com/Prakhar-002/LEETCODE


#Todo 📌 QUESTION NUMBER 846 

class Solution:
      def isNStraightHand(self, hand: List[int], groupSize: int) -> bool:
            # If the total number of cards is not divisible by groupSize, return false
            if len(hand) % groupSize != 0:
                  return False
            
            #Create a frequency map to count occurrences of each card
            freq = Counter(hand)

            # Sort the hand array to process cards in ascending order
            hand.sort() 

            # Iterate through each card in the sorted hand
            for card in hand:
            # If the current card has already been used up, skip it
                  if(freq[card] == 0):
                        continue

                  # Try to form a group of size groupSize starting from the current card
                  for i in range(groupSize):
                        cur_card = card + i

                        # If the current card needed for the group is not available, return false
                        if freq[cur_card] == 0:
                              return False

                        #Decrease the frequency of the current card
                        freq[cur_card] -= 1
            # If all groups are successfully formed, return true
            return True

