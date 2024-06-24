//! https://github.com/Prakhar-002/LEETCODE

//? Time complexity -> O(n)

//? Space complexity -> O(1)

#include <deque>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
      int minKBitFlips(vector<int>& nums, int k) {
            // Taking a variable that tell us the window 
            int curWindowFlip = 0;
            int flips = 0;

            for (int i = 0; i < nums.size(); i++) {
                  // Step 2
                  // first condition is that we have a window of k length
                  // 2nd we check if we had flipped our window 
                  // cause whenever we flip we assign 2 to our array at that index 
                  if ((i - k) >= 0 && nums[i - k] == 2) {
                        curWindowFlip--;
                  }

                  // Step 1
                  // if nums[i] (either 0 or 1) + how many flips we did in our cur window
                  // we mod by to cause the value will either 0 or 1 
                  // odd time flips give opp value
                  // even time flips gives same value
                  if ((nums[i] + curWindowFlip) % 2 == 0) {
                        // if we do not left with window of length k to flip we'll return -1
                        if (i + k > nums.size()){
                              return -1;
                        }

                        // total flip will 1
                        flips++;
                        // this window will inc by 1 
                        curWindowFlip++;
                        //  we modify our arr cause we have to check for window
                        nums[i] = 2;
                  }
            }

            return flips;
      }
};

// ---------------------Using queue----------------------------------

//? Time complexity -> O(n)

//? Space complexity -> O(k)


class Solution {
public:
      int minKBitFlips(vector<int>& nums, int k) {
            deque<int> q;
            int flips = 0;

            for (int i = 0; i < nums.size(); i++) {
                  //  Step 2 
                  //  q should not empty and length of q should be k 
                  //  Ex q = [0, 1, 2, 3]
                  //                   i   -> pointer
                  //  so whatever we have at 0 in queue will be the popped  
                  
                  while (!q.empty() && (i > (q.front() + k - 1))) {
                        q.pop_front();
                  }

                  if ((nums[i] + q.size()) % 2 == 0) {
                        // if we do not left with window of length k to flip we'll return -1
                        if (i + k > nums.size()){
                              return -1;
                        }

                        // +1 flips every time we flips
                        flips++;
                        // In the queue we'll store where we had flipped
                        q.push_back(i);
                  }
            }

            return flips;
      }
};