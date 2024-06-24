//! https://github.com/Prakhar-002/LEETCODE

#include <deque>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
      vector<int> maxSlidingWindow(vector<int>& nums, int k) {
            // A deque that stores the index of nums
            deque<int> decDeq;

            int left = 0;
            vector<int> maxWindow;

            // Traverse the whole list
            for (int right = 0; right < nums.size(); right++){
                  // Whenever we get a big value well pop smaller value from our queue
                  while (!decDeq.empty() && nums[decDeq.back()] < nums[right]){
                        decDeq.pop_back();
                  }

                  // append the value if we get a small value cause we've to maintain the decreasing queue
                  decDeq.push_back(right);

                  // if our window get bigger than k
                  // cause we are storing index so our left pointer will be out of bound from our window
                  if (left > decDeq.front()){
                        // so we'll pop from left
                        decDeq.pop_front();
                  }

                  // size should at least k so size will (right pointer + 1)
                  if (right + 1 >= k){
                        // we'll store the value that is most left to our q in our array
                        maxWindow.push_back(nums[decDeq.front()]);
                        // once we take one window we'll update our window by left++
                        left++;
                  }
            }

            return maxWindow;
      }
};