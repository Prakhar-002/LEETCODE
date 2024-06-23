//! https://github.com/Prakhar-002/LEETCODE

#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;
class Solution{
public:
      int maxDistance(vector<int> &position, int m){
            // Sort the array first
            sort(position.begin(), position.end());
            int n = position.size();
            // Minimum possible dist for a ball is 1
            int low = 1;
            // Maximum possible distance for 1 ball is (max value - min value) / (number of balls - 1)
            int high = (position[n - 1] - position[0]) / (m - 1);
            // Until they swap each other
            while (low <= high){
                  // Finding mid and checking if we can place m balls with this maximum possible distance
                  // We'll apply binary search with maximum possible distance, and if we can, we'll get our answer
                  int mid = low + (high - low) / 2;
                  if (canWePlace(position, mid, m)){
                        // If we can't place with mid distance for 1 ball, we'll increase our distance
                        low = mid + 1;
                  }
                  else{
                        // If we get our answer, it means we could place m balls with mid distance between them
                        // We'll check for a shorter distance, so we'll decrease high
                        high = mid - 1;
                  }
            }
            // Return high, as the minimum will be at high at the last
            return high;
      }

private:
      bool canWePlace(vector<int> &position, int dist, int balls){
            // We place one ball at 0 index, so the count is 1
            int cntBalls = 1;
            // The force is |x - y|, so the 2nd ball - 1st ball position => x and y are position[i]
            // The first ball position is at 0, and the force will be position[0]
            int initialPos = position[0];
            for (int i = 0; i < position.size(); i++){
                  if (position[i] - initialPos >= dist){
                        // Increase our ball count if |x - y| is greater than our minimum possible distance
                        cntBalls++;
                        // We will update our first ball position with the 2nd ball position
                        // and check for the next possible place for the next ball
                        initialPos = position[i];
                  }
                  // If we found a place where we can place m balls, we'll return true
                  if (cntBalls >= balls){
                        return true;
                  }
            }
            // Else, we'll return false
            return false;
      }
};