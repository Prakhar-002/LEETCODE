#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution
{
public:
      bool isNStraightHand(vector<int> &hand, int groupSize)
      {
            // If the total number of cards is not divisible by groupSize, return false
            if (hand.size() % groupSize != 0)
            {
                  return false;
            }

            // Create a frequency map to count occurrences of each card
            map<int, int> freq;
            for (int card : hand)
            {
                  freq[card]++;
            }

            // Sort the hand array to process cards in ascending order
            sort(hand.begin(), hand.end());

            // Iterate through each card in the sorted hand
            for (int card : hand)
            {
                  // If the current card has already been used up, skip it
                  if (freq[card] == 0)
                  {
                        continue;
                  }

                  // Try to form a group of size groupSize starting from the current card
                  for (int i = 0; i < groupSize; i++)
                  {
                        int cur_card = card + i;

                        // If the current card needed for the group is not available, return false
                        if (freq[cur_card] == 0)
                        {
                              return false;
                        }

                        // Decrease the frequency of the current card
                        freq[cur_card]--;
                  }
            }

            // If all groups are successfully formed, return true
            return true;
      }
};
